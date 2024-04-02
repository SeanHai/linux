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
	{ 0x11230695, "ata_bmdma32_port_ops" },
	{ 0x9e49176, "ata_cable_40wire" },
	{ 0xd4a67ac0, "ata_cable_unknown" },
	{ 0x2a846986, "ata_bmdma_port_ops" },
	{ 0x92be7ecd, "ata_cable_ignore" },
	{ 0x9c5b360f, "ata_pci_device_suspend" },
	{ 0xd80fdb3f, "ata_pci_remove_one" },
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0xf9c388e5, "dev_err" },
	{ 0xf6e874f5, "ata_timing_merge" },
	{ 0x297cc0d1, "ata_timing_compute" },
	{ 0x55f3dae6, "ata_dev_pair" },
	{ 0x41e448d9, "ata_dev_next" },
	{ 0xefd61b23, "ata_port_printk" },
	{ 0x743a165e, "ata_pack_xfermask" },
	{ 0x28318305, "snprintf" },
	{ 0xa3133838, "ata_acpi_gtm_xfermask" },
	{ 0x44706697, "ata_sff_prereset" },
	{ 0x710cd193, "pci_test_config_bits" },
	{ 0xd7c584a, "pci_write_config_dword" },
	{ 0xe1f4fcf5, "pci_read_config_dword" },
	{ 0x41cd18aa, "ata_print_version" },
	{ 0xbefd55f0, "ata_pci_bmdma_init_one" },
	{ 0xa0b7be94, "pcim_enable_device" },
	{ 0x280ee593, "ata_pci_bmdma_clear_simplex" },
	{ 0x2ce926a7, "ata_host_resume" },
	{ 0x6e04cd93, "ata_pci_device_do_resume" },
	{ 0x3288792d, "pci_write_config_byte" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xdd5c21c, "pci_read_config_byte" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libata";

MODULE_ALIAS("pci:v00001022d00007401sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d00007409sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d00007411sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d00007441sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d00007469sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd000001BCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000065sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000085sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd000000D5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd000000E5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000053sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000035sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000265sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd0000036Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd000003ECsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000448sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000560sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd0000056Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000759sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d0000209Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d00002092sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "3196D11AA7F23ACB9EBFFBF");
MODULE_INFO(rhelversion, "8.0");
