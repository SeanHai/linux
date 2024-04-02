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
	{ 0xd80fdb3f, "ata_pci_remove_one" },
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0xc46b4f01, "ata_bmdma_qc_issue" },
	{ 0xf10de535, "ioread8" },
	{ 0x848d372e, "iowrite8" },
	{ 0xd1803fe8, "ata_std_qc_defer" },
	{ 0x44706697, "ata_sff_prereset" },
	{ 0xa37d4c1c, "ata_bmdma_stop" },
	{ 0xbefd55f0, "ata_pci_bmdma_init_one" },
	{ 0xf33f3525, "pci_read_config_word" },
	{ 0x27e1a049, "printk" },
	{ 0xe1f4fcf5, "pci_read_config_dword" },
	{ 0xd7c584a, "pci_write_config_dword" },
	{ 0xa0b7be94, "pcim_enable_device" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x3288792d, "pci_write_config_byte" },
	{ 0xdd5c21c, "pci_read_config_byte" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libata";

MODULE_ALIAS("pci:v00001103d00000004sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00000007sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00000005sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00000006sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00000009sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "8291890722CA4A9BB4D818F");
MODULE_INFO(rhelversion, "8.0");
