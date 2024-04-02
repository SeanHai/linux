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
	{ 0xd4a67ac0, "ata_cable_unknown" },
	{ 0x9e49176, "ata_cable_40wire" },
	{ 0x9878e8cb, "ata_common_sdev_attrs" },
	{ 0x92a0f1e7, "ata_scsi_unlock_native_capacity" },
	{ 0xb9366712, "ata_std_bios_param" },
	{ 0x5b1dd5cd, "ata_scsi_slave_destroy" },
	{ 0xca07611e, "ata_scsi_slave_config" },
	{ 0x858e2d45, "ata_scsi_queuecmd" },
	{ 0xf69450fd, "ata_scsi_ioctl" },
	{ 0x2a846986, "ata_bmdma_port_ops" },
	{ 0x61751f74, "ata_bmdma_dumb_qc_prep" },
	{ 0x4132b97b, "ata_bmdma_qc_prep" },
	{ 0x9c5b360f, "ata_pci_device_suspend" },
	{ 0xd80fdb3f, "ata_pci_remove_one" },
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xafddd545, "ata_id_c_string" },
	{ 0x8476bd74, "ata_dummy_port_info" },
	{ 0xbefd55f0, "ata_pci_bmdma_init_one" },
	{ 0xa0b7be94, "pcim_enable_device" },
	{ 0x2ce926a7, "ata_host_resume" },
	{ 0x6e04cd93, "ata_pci_device_do_resume" },
	{ 0x27e1a049, "printk" },
	{ 0x2c2719bd, "pci_dev_put" },
	{ 0xd7c584a, "pci_write_config_dword" },
	{ 0xe1f4fcf5, "pci_read_config_dword" },
	{ 0x39ecd774, "pci_get_device" },
	{ 0x280ee593, "ata_pci_bmdma_clear_simplex" },
	{ 0xb9a8986d, "pci_write_config_word" },
	{ 0xf33f3525, "pci_read_config_word" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x3288792d, "pci_write_config_byte" },
	{ 0xdd5c21c, "pci_read_config_byte" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libata";

MODULE_ALIAS("pci:v00001166d00000211sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001166d00000212sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001166d00000213sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001166d00000217sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001166d00000214sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "022B703EA0B57576F4AB40F");
MODULE_INFO(rhelversion, "8.0");
