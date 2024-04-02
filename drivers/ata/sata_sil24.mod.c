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
	{ 0x9c5b360f, "ata_pci_device_suspend" },
	{ 0xd80fdb3f, "ata_pci_remove_one" },
	{ 0x9878e8cb, "ata_common_sdev_attrs" },
	{ 0x92a0f1e7, "ata_scsi_unlock_native_capacity" },
	{ 0xb9366712, "ata_std_bios_param" },
	{ 0x7f680436, "ata_scsi_change_queue_depth" },
	{ 0x5b1dd5cd, "ata_scsi_slave_destroy" },
	{ 0xca07611e, "ata_scsi_slave_config" },
	{ 0x858e2d45, "ata_scsi_queuecmd" },
	{ 0xf69450fd, "ata_scsi_ioctl" },
	{ 0x5070a8b4, "sata_pmp_port_ops" },
	{ 0xfb166cb4, "param_ops_bool" },
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x5ec62549, "ata_dev_classify" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x87b8798d, "sg_next" },
	{ 0x69acdf38, "memcpy" },
	{ 0x7646cee, "ata_tf_to_fis" },
	{ 0xd1803fe8, "ata_std_qc_defer" },
	{ 0x9384cd49, "ata_tf_from_fis" },
	{ 0x153fc24b, "ata_msleep" },
	{ 0x32592244, "ata_link_offline" },
	{ 0x476574d2, "sata_link_debounce" },
	{ 0xc428068d, "sata_deb_timing_long" },
	{ 0xf4012a17, "ata_link_online" },
	{ 0xc5884772, "sata_set_spd" },
	{ 0x4bd0aaef, "ata_link_printk" },
	{ 0xe048c60, "sata_std_hardreset" },
	{ 0x7844ce69, "sata_pmp_error_handler" },
	{ 0x95ac080d, "ata_eh_freeze_port" },
	{ 0x703f6c08, "ata_port_pbar_desc" },
	{ 0xfb578fc5, "memset" },
	{ 0xf0191bff, "dmam_alloc_attrs" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0x8fe95700, "ata_port_abort" },
	{ 0xa9f9f640, "sata_async_notification" },
	{ 0x9f4dc2, "ata_link_abort" },
	{ 0x9bf62a6c, "ata_port_freeze" },
	{ 0xd033bed0, "ata_ehi_push_desc" },
	{ 0xecbc643e, "ata_ehi_clear_desc" },
	{ 0xefd61b23, "ata_port_printk" },
	{ 0xf8f3a0fb, "ata_ratelimit" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0x586694d0, "ata_qc_complete_multiple" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x92c878b0, "pci_intx" },
	{ 0xe6478472, "_dev_info" },
	{ 0xfcec1a67, "pci_enable_msi" },
	{ 0x41cd18aa, "ata_print_version" },
	{ 0xbc7b5bef, "ata_host_activate" },
	{ 0x50fe27c8, "pci_set_master" },
	{ 0xb8cec420, "pcie_set_readrq" },
	{ 0xe4bf7f13, "dma_set_coherent_mask" },
	{ 0xa54c0ba0, "dma_set_mask" },
	{ 0xde47eeb, "ata_host_alloc_pinfo" },
	{ 0xd5184fc1, "pcim_iomap_table" },
	{ 0x9a248381, "pcim_iomap_regions" },
	{ 0xa0b7be94, "pcim_enable_device" },
	{ 0x2ce926a7, "ata_host_resume" },
	{ 0x6e04cd93, "ata_pci_device_do_resume" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x1c6431ec, "ata_wait_register" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libata";

MODULE_ALIAS("pci:v00001095d00003124sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003124sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001095d00003132sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001095d00000242sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001095d00000244sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001095d00003131sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001095d00003531sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "C47B744D945B4F2DBED581B");
MODULE_INFO(rhelversion, "8.0");
