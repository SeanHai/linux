#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xe6af07fa, "module_layout" },
	{ 0xd80fdb3f, "ata_pci_remove_one" },
	{ 0x9878e8cb, "ata_common_sdev_attrs" },
	{ 0x92a0f1e7, "ata_scsi_unlock_native_capacity" },
	{ 0xb9366712, "ata_std_bios_param" },
	{ 0x5b1dd5cd, "ata_scsi_slave_destroy" },
	{ 0xca07611e, "ata_scsi_slave_config" },
	{ 0x858e2d45, "ata_scsi_queuecmd" },
	{ 0xf69450fd, "ata_scsi_ioctl" },
	{ 0x2a846986, "ata_bmdma_port_ops" },
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0xe1f4fcf5, "pci_read_config_dword" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xee70ea31, "ata_port_desc" },
	{ 0x73a48b4a, "ata_sff_std_ports" },
	{ 0x41cd18aa, "ata_print_version" },
	{ 0xbc7b5bef, "ata_host_activate" },
	{ 0xe818b32b, "ata_bmdma_interrupt" },
	{ 0x92c878b0, "pci_intx" },
	{ 0x50fe27c8, "pci_set_master" },
	{ 0x72eae583, "ata_pci_bmdma_init" },
	{ 0xd8b033fe, "ata_pci_sff_init_host" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0xde47eeb, "ata_host_alloc_pinfo" },
	{ 0xa0b7be94, "pcim_enable_device" },
	{ 0xd7c584a, "pci_write_config_dword" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libata";

MODULE_ALIAS("pci:v000010B9d00005289sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B9d00005287sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B9d00005281sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "C60B0AA26D8D8465004E4E7");
MODULE_INFO(rhelversion, "8.0");
