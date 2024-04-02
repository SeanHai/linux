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
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0x9c5b360f, "ata_pci_device_suspend" },
	{ 0xd80fdb3f, "ata_pci_remove_one" },
	{ 0x9878e8cb, "ata_common_sdev_attrs" },
	{ 0x92a0f1e7, "ata_scsi_unlock_native_capacity" },
	{ 0xb9366712, "ata_std_bios_param" },
	{ 0x5b1dd5cd, "ata_scsi_slave_destroy" },
	{ 0xca07611e, "ata_scsi_slave_config" },
	{ 0x858e2d45, "ata_scsi_queuecmd" },
	{ 0xf69450fd, "ata_scsi_ioctl" },
	{ 0x2a846986, "ata_bmdma_port_ops" },
	{ 0xe048c60, "sata_std_hardreset" },
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x3d0a4a3, "ata_slave_link_init" },
	{ 0xe4bf7f13, "dma_set_coherent_mask" },
	{ 0xa54c0ba0, "dma_set_mask" },
	{ 0x703f6c08, "ata_port_pbar_desc" },
	{ 0x73a48b4a, "ata_sff_std_ports" },
	{ 0xd5184fc1, "pcim_iomap_table" },
	{ 0xde47eeb, "ata_host_alloc_pinfo" },
	{ 0xbc7b5bef, "ata_host_activate" },
	{ 0x50fe27c8, "pci_set_master" },
	{ 0xe6478472, "_dev_info" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0x9a248381, "pcim_iomap_regions" },
	{ 0x693ba234, "ata_pci_bmdma_prepare_host" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x41cd18aa, "ata_print_version" },
	{ 0xa0b7be94, "pcim_enable_device" },
	{ 0xe1f4fcf5, "pci_read_config_dword" },
	{ 0xd7c584a, "pci_write_config_dword" },
	{ 0x7504965c, "ata_sff_error_handler" },
	{ 0x7e3db365, "ata_bmdma_irq_clear" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xefd61b23, "ata_port_printk" },
	{ 0x153fc24b, "ata_msleep" },
	{ 0xd94b6125, "ata_sff_wait_ready" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xe46835cf, "ata_sff_pause" },
	{ 0x7d584ee8, "ata_bmdma_start" },
	{ 0x447514be, "ata_sff_tf_load" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x9bf62a6c, "ata_port_freeze" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xe818b32b, "ata_bmdma_interrupt" },
	{ 0xe484e35f, "ioread32" },
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

MODULE_ALIAS("pci:v00001106d00005337sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00000591sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00003149sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00003249sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00005372sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00007372sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00005287sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00009000sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "A2FA11AD189C83CE12D8031");
MODULE_INFO(rhelversion, "8.0");
