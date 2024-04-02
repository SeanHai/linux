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
	{ 0x5b1dd5cd, "ata_scsi_slave_destroy" },
	{ 0x858e2d45, "ata_scsi_queuecmd" },
	{ 0xf69450fd, "ata_scsi_ioctl" },
	{ 0x2a846986, "ata_bmdma_port_ops" },
	{ 0xd1803fe8, "ata_std_qc_defer" },
	{ 0xfb166cb4, "param_ops_bool" },
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0xe4bf7f13, "dma_set_coherent_mask" },
	{ 0xfcec1a67, "pci_enable_msi" },
	{ 0x2ae2fdba, "dev_notice" },
	{ 0x41cd18aa, "ata_print_version" },
	{ 0x2e53e983, "ata_pci_sff_activate_host" },
	{ 0x50fe27c8, "pci_set_master" },
	{ 0x9a248381, "pcim_iomap_regions" },
	{ 0x693ba234, "ata_pci_bmdma_prepare_host" },
	{ 0xa0b7be94, "pcim_enable_device" },
	{ 0x87b8798d, "sg_next" },
	{ 0x4132b97b, "ata_bmdma_qc_prep" },
	{ 0xc46b4f01, "ata_bmdma_qc_issue" },
	{ 0xfb578fc5, "memset" },
	{ 0xf0191bff, "dmam_alloc_attrs" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0x4f3658a1, "ata_bmdma_port_start" },
	{ 0x6a7b6976, "sata_link_hardreset" },
	{ 0x4bd0aaef, "ata_link_printk" },
	{ 0x94b95093, "sata_link_resume" },
	{ 0x4fdc945d, "sata_deb_timing_normal" },
	{ 0xcccfb2fa, "sata_deb_timing_hotplug" },
	{ 0xe484e35f, "ioread32" },
	{ 0x6a58de84, "ata_bmdma_post_internal_cmd" },
	{ 0xedf62c4e, "ata_sff_tf_read" },
	{ 0x7e3db365, "ata_bmdma_irq_clear" },
	{ 0x8fe95700, "ata_port_abort" },
	{ 0x2243c55a, "__ata_ehi_push_desc" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x17c430a5, "blk_queue_max_segments" },
	{ 0x9ad8cf3d, "blk_queue_segment_boundary" },
	{ 0xa54c0ba0, "dma_set_mask" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xefd61b23, "ata_port_printk" },
	{ 0x5c2e2c00, "ata_bmdma_error_handler" },
	{ 0xd033bed0, "ata_ehi_push_desc" },
	{ 0x586694d0, "ata_qc_complete_multiple" },
	{ 0xeadffe78, "sata_scr_write" },
	{ 0x27f42ea7, "sata_scr_read" },
	{ 0xecbc643e, "ata_ehi_clear_desc" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x9bf62a6c, "ata_port_freeze" },
	{ 0x7f632a44, "ata_bmdma_port_intr" },
	{ 0x84a12885, "ata_sff_check_status" },
	{ 0xf10de535, "ioread8" },
	{ 0x848d372e, "iowrite8" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xa37d4c1c, "ata_bmdma_stop" },
	{ 0xebb54635, "ata_dev_printk" },
	{ 0x7f680436, "ata_scsi_change_queue_depth" },
	{ 0xafddd545, "ata_id_c_string" },
	{ 0xca07611e, "ata_scsi_slave_config" },
	{ 0x2ce926a7, "ata_host_resume" },
	{ 0x6e04cd93, "ata_pci_device_do_resume" },
	{ 0xd7c584a, "pci_write_config_dword" },
	{ 0xe1f4fcf5, "pci_read_config_dword" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x3288792d, "pci_write_config_byte" },
	{ 0xdd5c21c, "pci_read_config_byte" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libata";

MODULE_ALIAS("pci:v000010DEd0000008Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd000000E3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd000000EEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000054sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000055sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000036sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd0000003Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000266sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000267sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd0000037Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd0000037Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd000003E7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd000003F6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd000003F7sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "43DBD79233995EF90688464");
MODULE_INFO(rhelversion, "8.0");
