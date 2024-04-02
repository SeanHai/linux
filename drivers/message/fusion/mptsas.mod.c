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
	{ 0xcc500cac, "mptscsih_slave_destroy" },
	{ 0x9e862f5a, "mptscsih_host_reset" },
	{ 0x85a50c4d, "mptscsih_dev_reset" },
	{ 0xcdc0895c, "mptscsih_abort" },
	{ 0x60a1a690, "mptscsih_info" },
	{ 0x33829a16, "mptscsih_resume" },
	{ 0x1af4648e, "mptscsih_suspend" },
	{ 0x981efe92, "mpt_deregister" },
	{ 0xe6c1e126, "mpt_event_deregister" },
	{ 0x610b257e, "mpt_reset_deregister" },
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0x3abba457, "sas_release_transport" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0x3ce82171, "mpt_reset_register" },
	{ 0x5c369789, "mpt_event_register" },
	{ 0xf4816ba7, "mptscsih_scandv_complete" },
	{ 0x65c7298, "mptscsih_taskmgmt_complete" },
	{ 0x67835d30, "mpt_register" },
	{ 0x582a928, "mptscsih_io_done" },
	{ 0xdf263d83, "sas_attach_transport" },
	{ 0x1aad2708, "scsi_track_queue_full" },
	{ 0xf0116521, "mpt_GetIocState" },
	{ 0x83f5b4d9, "mptscsih_get_scsi_lookup" },
	{ 0x6e4ea36, "starget_for_each_device" },
	{ 0x84e4ef5d, "mpt_raid_phys_disk_pg1" },
	{ 0x7f45f0e, "mpt_raid_phys_disk_get_num_paths" },
	{ 0xf50eb3eb, "scsi_remove_device" },
	{ 0x7beb292d, "mpt_findImVolumes" },
	{ 0x6a9ac534, "mptbase_sas_persist_operation" },
	{ 0xb559ea59, "scsi_add_host_with_dma" },
	{ 0x76d451c4, "add_taint" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x9b5d76b9, "scsi_host_alloc" },
	{ 0x3b97ceea, "mptscsih_flush_running_cmds" },
	{ 0x2f07cab7, "mpt_attach" },
	{ 0x408bd9c1, "scsi_add_device" },
	{ 0x733dc065, "scsi_device_put" },
	{ 0xd2491c3c, "scsi_device_lookup" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x9166fada, "strncpy" },
	{ 0x989036da, "sas_port_mark_backlink" },
	{ 0xf5344663, "scsi_is_sas_rphy" },
	{ 0x91571dec, "sas_phy_free" },
	{ 0xa9e17d7c, "sas_port_add" },
	{ 0x7e4f7dad, "sas_port_alloc_num" },
	{ 0xdb8d7b58, "sas_phy_alloc" },
	{ 0xbbb314c5, "sas_expander_alloc" },
	{ 0x4eab1ae7, "sas_phy_add" },
	{ 0xc8cdabbb, "sas_port_add_phy" },
	{ 0xb99b4c70, "sdev_prefix_printk" },
	{ 0x69c2e2c7, "mptscsih_slave_configure" },
	{ 0x1ebb097f, "sas_read_port_mode_page" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x1328ab74, "mptscsih_taskmgmt_response_code" },
	{ 0xbb8c805, "dma_direct_unmap_sg" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x250ffaa1, "dma_direct_map_sg" },
	{ 0x36b3d463, "dma_ops" },
	{ 0xc4f6749f, "bsg_job_done" },
	{ 0xca129b64, "mptscsih_raid_id_to_num" },
	{ 0xa2359ca2, "mptscsih_is_phys_disk" },
	{ 0x63cf2e9, "mptscsih_ioc_reset" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x259acd8e, "sas_port_delete" },
	{ 0xa797fcd, "sas_port_delete_phy" },
	{ 0x95ad910f, "mpt_detach" },
	{ 0x9bebb036, "mptscsih_remove" },
	{ 0x642663cc, "sas_remove_host" },
	{ 0x5ed90adc, "int_to_scsilun" },
	{ 0x337bba2d, "scsi_print_command" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x981df78d, "mptscsih_qcmd" },
	{ 0xf1cc3dcb, "mpt_raid_phys_disk_pg0" },
	{ 0x540e0eb6, "sas_rphy_free" },
	{ 0xd61054c2, "sas_rphy_add" },
	{ 0xebd935b0, "sas_end_device_alloc" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc6031860, "mpt_clear_taskmgmt_in_progress_flag" },
	{ 0x4c326bef, "mpt_put_msg_frame_hi_pri" },
	{ 0xa0e5a633, "mpt_set_taskmgmt_in_progress_flag" },
	{ 0xd855d813, "scsi_device_set_state" },
	{ 0x29361773, "complete" },
	{ 0x7c38832, "device_reprobe" },
	{ 0xd1e4ec46, "queue_delayed_work_on" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0xc1c794e, "delayed_work_timer_fn" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x2df1adac, "mpt_Soft_Hard_ResetHandler" },
	{ 0x42125cf8, "mpt_free_msg_frame" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x444f1b47, "mpt_put_msg_frame" },
	{ 0x90ad2545, "mpt_get_msg_frame" },
	{ 0x4a928de6, "mutex_lock_interruptible" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xeddfd55a, "dma_free_attrs" },
	{ 0x80d50279, "dma_alloc_attrs" },
	{ 0x305fd80d, "mpt_config" },
	{ 0x76d1f14a, "__scsi_iterate_devices" },
	{ 0xe637fa94, "dev_printk" },
	{ 0xab769aaf, "scsi_is_host_device" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xb5a8d234, "cancel_delayed_work" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x37a0cba, "kfree" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x27e1a049, "printk" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mptscsih,mptbase,scsi_transport_sas";

MODULE_ALIAS("pci:v00001000d00000054sv000015ADsd*bc*sc*i*");

MODULE_INFO(srcversion, "B4A9A7EFF054A970560DAD6");
MODULE_INFO(rhelversion, "8.0");
