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
	{ 0x9e49176, "ata_cable_40wire" },
	{ 0x9c5b360f, "ata_pci_device_suspend" },
	{ 0xd80fdb3f, "ata_pci_remove_one" },
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0xa37d4c1c, "ata_bmdma_stop" },
	{ 0x7e3db365, "ata_bmdma_irq_clear" },
	{ 0x27e1a049, "printk" },
	{ 0xf6e874f5, "ata_timing_merge" },
	{ 0x55f3dae6, "ata_dev_pair" },
	{ 0x297cc0d1, "ata_timing_compute" },
	{ 0x8476bd74, "ata_dummy_port_info" },
	{ 0x280ee593, "ata_pci_bmdma_clear_simplex" },
	{ 0x2ae2fdba, "dev_notice" },
	{ 0xbefd55f0, "ata_pci_bmdma_init_one" },
	{ 0xa0b7be94, "pcim_enable_device" },
	{ 0x2ce926a7, "ata_host_resume" },
	{ 0x6e04cd93, "ata_pci_device_do_resume" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xdd5c21c, "pci_read_config_byte" },
	{ 0x3288792d, "pci_write_config_byte" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libata";

MODULE_ALIAS("pci:v00001095d00000643sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001095d00000646sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001095d00000648sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001095d00000649sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "A050750A16874FA6F4CF325");
MODULE_INFO(rhelversion, "8.0");
