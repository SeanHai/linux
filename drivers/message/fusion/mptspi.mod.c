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
	{ 0xf4e56f17, "mptscsih_host_attrs" },
	{ 0x6728d001, "mptscsih_show_info" },
	{ 0x40617cf8, "mptscsih_bios_param" },
	{ 0x2ed414fa, "mptscsih_change_queue_depth" },
	{ 0x9e862f5a, "mptscsih_host_reset" },
	{ 0x3c588392, "mptscsih_bus_reset" },
	{ 0x85a50c4d, "mptscsih_dev_reset" },
	{ 0xcdc0895c, "mptscsih_abort" },
	{ 0x60a1a690, "mptscsih_info" },
	{ 0x10568012, "mptscsih_shutdown" },
	{ 0x1af4648e, "mptscsih_suspend" },
	{ 0x981efe92, "mpt_deregister" },
	{ 0xe6c1e126, "mpt_event_deregister" },
	{ 0x610b257e, "mpt_reset_deregister" },
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0xd0807598, "spi_release_transport" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0x3ce82171, "mpt_reset_register" },
	{ 0x5c369789, "mpt_event_register" },
	{ 0xf4816ba7, "mptscsih_scandv_complete" },
	{ 0x65c7298, "mptscsih_taskmgmt_complete" },
	{ 0x67835d30, "mpt_register" },
	{ 0x582a928, "mptscsih_io_done" },
	{ 0x23ea26e3, "spi_attach_transport" },
	{ 0x2f07cab7, "mpt_attach" },
	{ 0x8abc6c4b, "mptscsih_IssueTaskMgmt" },
	{ 0x76d451c4, "add_taint" },
	{ 0x7bdd5516, "scsi_scan_host" },
	{ 0xb559ea59, "scsi_add_host_with_dma" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x9b5d76b9, "scsi_host_alloc" },
	{ 0xca129b64, "mptscsih_raid_id_to_num" },
	{ 0xcc500cac, "mptscsih_slave_destroy" },
	{ 0xb99b4c70, "sdev_prefix_printk" },
	{ 0x2e2f24ac, "scsi_device_lookup_by_target" },
	{ 0x63cf2e9, "mptscsih_ioc_reset" },
	{ 0x69c2e2c7, "mptscsih_slave_configure" },
	{ 0x3f0edaa0, "scsi_scan_target" },
	{ 0x76d1f14a, "__scsi_iterate_devices" },
	{ 0x7beb292d, "mpt_findImVolumes" },
	{ 0x4487b832, "spi_display_xfer_agreement" },
	{ 0xe7138dbc, "spi_dv_device" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xeddfd55a, "dma_free_attrs" },
	{ 0x305fd80d, "mpt_config" },
	{ 0x80d50279, "dma_alloc_attrs" },
	{ 0xe637fa94, "dev_printk" },
	{ 0x47a2eb26, "mptscsih_event_process" },
	{ 0xa2359ca2, "mptscsih_is_phys_disk" },
	{ 0x337bba2d, "scsi_print_command" },
	{ 0x981df78d, "mptscsih_qcmd" },
	{ 0x9bebb036, "mptscsih_remove" },
	{ 0x7256f41e, "scsi_remove_host" },
	{ 0x33829a16, "mptscsih_resume" },
	{ 0x121da905, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x42125cf8, "mpt_free_msg_frame" },
	{ 0xa10f989e, "mpt_HardResetHandler" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x27e1a049, "printk" },
	{ 0x444f1b47, "mpt_put_msg_frame" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x90ad2545, "mpt_get_msg_frame" },
	{ 0xab769aaf, "scsi_is_host_device" },
	{ 0x37a0cba, "kfree" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mptscsih,mptbase,scsi_transport_spi";

MODULE_ALIAS("pci:v00001000d00000030sv000015ADsd*bc*sc*i*");

MODULE_INFO(srcversion, "E6ED985D39682FC23CC1E9B");
MODULE_INFO(rhelversion, "8.0");
