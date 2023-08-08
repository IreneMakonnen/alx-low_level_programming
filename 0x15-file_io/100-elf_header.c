#include "main.h"
#include <elf.h>

void print_magic(Elf64_Ehdr *header);
void print_class(Elf64_Ehdr *header);
void print_data(Elf64_Ehdr *header);
void print_version(Elf64_Ehdr *header);
void print_osabi(Elf64_Ehdr *header);
void print_abi_version(Elf64_Ehdr *header);
void print_type(Elf64_Ehdr *header);
void print_entry_point(Elf64_Ehdr *header);

/**
 * print_magic - Prints the ELF magic bytes
 * @header: Pointer to the ELF header structure
 */
void print_magic(Elf64_Ehdr *header)
{
	int i;

	printf("Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
		printf("%02x ", header->e_ident[i]);
	printf("\n");
}

/**
 * print_class - Prints the ELF class information
 * @header: Pointer to the ELF header structure
 */
void print_class(Elf64_Ehdr *header)
{
	printf("Class:                             ");
	switch (header->e_ident[EI_CLASS])
	{
		case ELFCLASSNONE:
			printf("None\n");
			break;
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		default:
			printf("<unknown>\n");
			break;
	}
}

/**
 * print_data - Prints the ELF data encoding
 * @header: Pointer to the ELF header structure
 */
void print_data(Elf64_Ehdr *header)
{
	printf("Data:                              ");
	switch (header->e_ident[EI_DATA])
	{
		case ELFDATANONE:
			printf("None\n");
			break;
		case ELFDATA2LSB:
			printf("2's complement, little-endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big-endian\n");
			break;
		default:
			printf("<unknown>\n");
			break;
	}
}

/**
 * print_version - Prints the ELF version
 * @header: Pointer to the ELF header structure
 */
void print_version(Elf64_Ehdr *header)
{
	printf("Version:		%d\n", header->e_ident[EI_VERSION]);
}

/**
 * print_osabi - Prints the ELF OS/ABI information
 * @header: Pointer to the ELF header structure
 */
void print_osabi(Elf64_Ehdr *header)
{
	printf("OS/ABI:				");
	switch (header->e_ident[EI_OSABI])
	{
		case ELFOSABI_NONE:
			printf("UNIX - System V\n");
			break;
		default:
			printf("<unknown>\n");
			break;
	}
}

/**
 * print_abi_version - Prints the ELF ABI version
 * @header: Pointer to the ELF header structure
 */
void print_abi_version(Elf64_Ehdr *header)
{
	printf("ABI Version:		%d\n", header->e_ident[EI_ABIVERSION]);
}

/**
 * print_type - Prints the ELF type
 * @header: Pointer to the ELF header structure
 */
void print_type(Elf64_Ehdr *header)
{
	printf("Type:                              ");
	switch (header->e_type)
	{
		case ET_NONE:
			printf("NONE (No file type)\n");
			break;
		case ET_REL:
			printf("REL (Relocatable file)\n");
			break;
		case ET_EXEC:
			printf("EXEC (Executable file)\n");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)\n");
			break;
		case ET_CORE:
			printf("CORE (Core file)\n");
			break;
		default:
			printf("<unknown>\n");
			break;
	}
}

/**
 * print_entry_point - Prints the ELF entry point address
 * @header: Pointer to the ELF header structure
 */
void print_entry_point(Elf64_Ehdr *header)
{
	printf("Entry point address:		0x%lx\n", (unsigned long)header->e_entry);
}

/**
 * main - Entry point for the ELF header information program
 * @argc: The number of command line arguments
 * @argv: An array of command line argument strings
 * Return: 0 on success or 98 on error
 */
int main(int argc, char *argv[])
{
	int fd;
	Elf64_Ehdr header;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		exit(98);
}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		perror("Error");
		exit(98);
	}
	if (read(fd, &header, sizeof(header)) != sizeof(header))
	{
		perror("Error");
		close(fd);
		exit(98);
	}
	if (header.e_ident[EI_MAG0] != ELFMAG0 ||
	header.e_ident[EI_MAG1] != ELFMAG1 ||
	header.e_ident[EI_MAG2] != ELFMAG2 ||
	header.e_ident[EI_MAG3] != ELFMAG3)
	{
		fprintf(stderr, "Error: %s is not an ELF file\n", argv[1]);
		close(fd);
		exit(98);
	}

	print_magic(&header);
	print_class(&header);
	print_data(&header);
	print_version(&header);
	print_osabi(&header);
	print_abi_version(&header);
	print_type(&header);
	print_entry_point(&header);
	close(fd);

	return (0);
}
