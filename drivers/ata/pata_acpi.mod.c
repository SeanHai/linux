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
	{ 0x9878e8cb, "ata_common_sdev_attrs" },
	{ 0x92a0f1e7, "ata_scsi_unlock_native_capacity" },
	{ 0xb9366712, "ata_std_bios_param" },
	{ 0x5b1dd5cd, "ata_scsi_slave_destroy" },
	{ 0xca07611e, "ata_scsi_slave_config" },
	{ 0x858e2d45, "ata_scsi_queuecmd" },
	{ 0xf69450fd, "ata_scsi_ioctl" },
	{ 0x2a846986, "ata_bmdma_port_ops" },
	{ 0xf5a88024, "ata_pci_device_resume" },
	{ 0x9c5b360f, "ata_pci_device_suspend" },
	{ 0xd80fdb3f, "ata_pci_remove_one" },
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0xc46b4f01, "ata_bmdma_qc_issue" },
	{ 0x97339e33, "ata_acpi_stm" },
	{ 0xd2b10a05, "ata_timing_find_mode" },
	{ 0x44706697, "ata_sff_prereset" },
	{ 0x4f3658a1, "ata_bmdma_port_start" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0x78843f2d, "is_acpi_device_node" },
	{ 0xa3133838, "ata_acpi_gtm_xfermask" },
	{ 0xaf6ade55, "ata_acpi_gtm" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x7fb1163b, "pcim_pin_device" },
	{ 0xa0b7be94, "pcim_enable_device" },
	{ 0xbefd55f0, "ata_pci_bmdma_init_one" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libata";

MODULE_ALIAS("pci:v*d*sv*sd*bc01sc01i*");

MODULE_INFO(srcversion, "0C74191FCF822DFBEC9FCC8");
MODULE_INFO(rhelversion, "8.0");
