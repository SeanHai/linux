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
	{ 0x23e719b6, "ata_sff_data_xfer_noirq" },
	{ 0x9c5b360f, "ata_pci_device_suspend" },
	{ 0xd80fdb3f, "ata_pci_remove_one" },
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x848d372e, "iowrite8" },
	{ 0x6741d24f, "ata_acpi_cbl_80wire" },
	{ 0xf6e874f5, "ata_timing_merge" },
	{ 0x297cc0d1, "ata_timing_compute" },
	{ 0x55f3dae6, "ata_dev_pair" },
	{ 0x41cd18aa, "ata_print_version" },
	{ 0x8476bd74, "ata_dummy_port_info" },
	{ 0xbefd55f0, "ata_pci_bmdma_init_one" },
	{ 0x2c2719bd, "pci_dev_put" },
	{ 0x39ecd774, "pci_get_device" },
	{ 0xa0b7be94, "pcim_enable_device" },
	{ 0x2ce926a7, "ata_host_resume" },
	{ 0x6e04cd93, "ata_pci_device_do_resume" },
	{ 0xd7c584a, "pci_write_config_dword" },
	{ 0xe1f4fcf5, "pci_read_config_dword" },
	{ 0x3288792d, "pci_write_config_byte" },
	{ 0xdd5c21c, "pci_read_config_byte" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0xebb54635, "ata_dev_printk" },
	{ 0xafddd545, "ata_id_c_string" },
	{ 0x44706697, "ata_sff_prereset" },
	{ 0x710cd193, "pci_test_config_bits" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0x4f3658a1, "ata_bmdma_port_start" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libata";

MODULE_ALIAS("pci:v00001106d00000415sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00000571sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00000581sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00001571sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00003164sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00005324sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d0000C409sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00009001sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "692525307A790A083362BA0");
MODULE_INFO(rhelversion, "8.0");
