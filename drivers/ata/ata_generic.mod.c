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
	{ 0xd4a67ac0, "ata_cable_unknown" },
	{ 0xf5a88024, "ata_pci_device_resume" },
	{ 0x9c5b360f, "ata_pci_device_suspend" },
	{ 0xd80fdb3f, "ata_pci_remove_one" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0x4b51f74c, "ata_xfer_mode2mask" },
	{ 0x43f56e82, "ata_xfer_mode2shift" },
	{ 0x24f63dcf, "ata_xfer_mask2mode" },
	{ 0xebb54635, "ata_dev_printk" },
	{ 0xc48b7ccf, "ata_mode_string" },
	{ 0x1b5059ce, "ata_id_xfermask" },
	{ 0x41e448d9, "ata_dev_next" },
	{ 0xf10de535, "ioread8" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xb9a8986d, "pci_write_config_word" },
	{ 0x280ee593, "ata_pci_bmdma_clear_simplex" },
	{ 0x7fb1163b, "pcim_pin_device" },
	{ 0xa0b7be94, "pcim_enable_device" },
	{ 0xe1f4fcf5, "pci_read_config_dword" },
	{ 0xbefd55f0, "ata_pci_bmdma_init_one" },
	{ 0xf33f3525, "pci_read_config_word" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libata";

MODULE_ALIAS("pci:v00001042d00003020sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009412d00006565sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001060d00000101sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001060d0000886Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001060d0000673Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00003388d00008013sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00000561sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001045d0000C558sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000016CAd00000001sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d*sv*sd*bc01sc01i*");
MODULE_ALIAS("pci:v*d*sv*sd*bc01sc01i*");

MODULE_INFO(srcversion, "31299D553C1274E39FAADC4");
MODULE_INFO(rhelversion, "8.0");
