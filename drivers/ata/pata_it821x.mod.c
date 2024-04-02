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
	{ 0xd621cc91, "ata_cable_80wire" },
	{ 0xd4a67ac0, "ata_cable_unknown" },
	{ 0x2a846986, "ata_bmdma_port_ops" },
	{ 0x9c5b360f, "ata_pci_device_suspend" },
	{ 0xd80fdb3f, "ata_pci_remove_one" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0x28318305, "snprintf" },
	{ 0x5857b225, "ioread16_rep" },
	{ 0x37a0cba, "kfree" },
	{ 0x12a38747, "usleep_range" },
	{ 0xf10de535, "ioread8" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x848d372e, "iowrite8" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0x4f3658a1, "ata_bmdma_port_start" },
	{ 0xa37d4c1c, "ata_bmdma_stop" },
	{ 0x7d584ee8, "ata_bmdma_start" },
	{ 0xfbb7bc64, "ata_sff_dev_select" },
	{ 0x55f3dae6, "ata_dev_pair" },
	{ 0xb96d15bf, "ata_do_dev_read_id" },
	{ 0xdd5c21c, "pci_read_config_byte" },
	{ 0xbefd55f0, "ata_pci_bmdma_init_one" },
	{ 0xa0b7be94, "pcim_enable_device" },
	{ 0x2ce926a7, "ata_host_resume" },
	{ 0x6e04cd93, "ata_pci_device_do_resume" },
	{ 0xd7c584a, "pci_write_config_dword" },
	{ 0xb9a8986d, "pci_write_config_word" },
	{ 0xf33f3525, "pci_read_config_word" },
	{ 0xc46b4f01, "ata_bmdma_qc_issue" },
	{ 0x41e448d9, "ata_dev_next" },
	{ 0x27e1a049, "printk" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xebb54635, "ata_dev_printk" },
	{ 0x1e6d26a8, "strstr" },
	{ 0xafddd545, "ata_id_c_string" },
	{ 0x3288792d, "pci_write_config_byte" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libata";

MODULE_ALIAS("pci:v00001283d00008211sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001283d00008212sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000017F3d00001010sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "F1A16FB2EDA4C94EE2B6C80");
MODULE_INFO(rhelversion, "8.0");
