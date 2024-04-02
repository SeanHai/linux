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
	{ 0x2d3385d3, "system_wq" },
	{ 0xbb8c805, "dma_direct_unmap_sg" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x66d95603, "scsi_remove_target" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xf9a482f9, "msleep" },
	{ 0x9706372e, "scsi_change_queue_depth" },
	{ 0x2b8ab42, "sg_copy_to_buffer" },
	{ 0x3abba457, "sas_release_transport" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0x9b5d76b9, "scsi_host_alloc" },
	{ 0x58a1b98b, "param_get_int" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0x754d539c, "strlen" },
	{ 0xb559ea59, "scsi_add_host_with_dma" },
	{ 0x661bca60, "scsi_block_requests" },
	{ 0x51722f38, "blk_queue_max_hw_sectors" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0x43132b0b, "pci_irq_get_affinity" },
	{ 0xf038f71c, "sas_is_tlr_enabled" },
	{ 0xa54c0ba0, "dma_set_mask" },
	{ 0xa584ca06, "pci_stop_and_remove_bus_device_locked" },
	{ 0xe637fa94, "dev_printk" },
	{ 0x4eab1ae7, "sas_phy_add" },
	{ 0x1057db90, "scsi_unblock_requests" },
	{ 0xac9542a7, "sas_disable_tlr" },
	{ 0xdfb2ae49, "pci_disable_device" },
	{ 0x862fba34, "pci_disable_msix" },
	{ 0x8112b3d2, "scsi_build_sense_buffer" },
	{ 0xc1c794e, "delayed_work_timer_fn" },
	{ 0xc8cdabbb, "sas_port_add_phy" },
	{ 0xa1f9a134, "__x86_indirect_thunk_rsi" },
	{ 0xad27f361, "__warn_printk" },
	{ 0x81b1b255, "cancel_work_sync" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x87b8798d, "sg_next" },
	{ 0xa1ffbb27, "blk_mq_tag_to_rq" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x3c92d494, "scmd_printk" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0x68f927fb, "cancel_delayed_work_sync" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0xa797fcd, "sas_port_delete_phy" },
	{ 0xea3c8e4e, "scsilun_to_int" },
	{ 0xf062ac06, "pci_enable_wake" },
	{ 0xeddfd55a, "dma_free_attrs" },
	{ 0xb9ff77a, "param_set_int" },
	{ 0xd61054c2, "sas_rphy_add" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0xb5aa7165, "dma_pool_destroy" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xd15546f9, "blk_queue_virt_boundary" },
	{ 0x91715312, "sprintf" },
	{ 0x40c7247c, "si_meminfo" },
	{ 0x337bba2d, "scsi_print_command" },
	{ 0xe4bf7f13, "dma_set_coherent_mask" },
	{ 0xeb81585a, "kthread_create_on_node" },
	{ 0x259acd8e, "sas_port_delete" },
	{ 0xb3b42a38, "mutex_trylock" },
	{ 0xa792fd7f, "cpumask_next" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xd09eff23, "dma_get_required_mask" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x57483f62, "scsi_internal_device_block_nowait" },
	{ 0xe8b27847, "raid_class_release" },
	{ 0xdf263d83, "sas_attach_transport" },
	{ 0x50fe27c8, "pci_set_master" },
	{ 0xab769aaf, "scsi_is_host_device" },
	{ 0x6bddef80, "misc_register" },
	{ 0x898c27fe, "pci_alloc_irq_vectors_affinity" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0xfb578fc5, "memset" },
	{ 0xdba47dbc, "pci_enable_pcie_error_reporting" },
	{ 0x752d5f5b, "kstrtobool" },
	{ 0x56898d73, "pci_restore_state" },
	{ 0xbbb314c5, "sas_expander_alloc" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x1ebb097f, "sas_read_port_mode_page" },
	{ 0x4a928de6, "mutex_lock_interruptible" },
	{ 0xebd935b0, "sas_end_device_alloc" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0x20c55ae0, "sscanf" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x31cd8869, "__cpu_online_mask" },
	{ 0x7c1372e8, "panic" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x9166fada, "strncpy" },
	{ 0xeb6b6275, "fasync_helper" },
	{ 0xf33f3525, "pci_read_config_word" },
	{ 0x7bdd5516, "scsi_scan_host" },
	{ 0x80d50279, "dma_alloc_attrs" },
	{ 0xb99b4c70, "sdev_prefix_printk" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xa9e17d7c, "sas_port_add" },
	{ 0x2f7754a8, "dma_pool_free" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x7b4129e2, "raid_class_attach" },
	{ 0xf7a5f713, "mark_tech_preview" },
	{ 0xefd9029, "scsi_host_put" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xe7b9136, "pci_device_support_removed" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0xafbe9d9d, "pci_find_capability" },
	{ 0x2b5d9faa, "attribute_container_find_class_device" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xe68fed60, "pci_select_bars" },
	{ 0x91571dec, "sas_phy_free" },
	{ 0xe6478472, "_dev_info" },
	{ 0x96393c2a, "pci_disable_link_state" },
	{ 0x408bd9c1, "scsi_add_device" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xb549bffc, "blk_queue_flag_set" },
	{ 0x12a38747, "usleep_range" },
	{ 0xd1e4ec46, "queue_delayed_work_on" },
	{ 0x709bd92f, "pci_cleanup_aer_uncorrect_error_status" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x6e4ea36, "starget_for_each_device" },
	{ 0xa202a8e5, "kmalloc_order_trace" },
	{ 0x7c38832, "device_reprobe" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x9877db88, "cpumask_next_and" },
	{ 0xd855d813, "scsi_device_set_state" },
	{ 0xcd8dd495, "dma_pool_alloc" },
	{ 0xa975ccbd, "wake_up_process" },
	{ 0xdb8d7b58, "sas_phy_alloc" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x642663cc, "sas_remove_host" },
	{ 0x76d1f14a, "__scsi_iterate_devices" },
	{ 0xa44d2dc1, "pci_irq_vector" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x20f5048a, "pci_set_power_state" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x78c6770, "pci_disable_pcie_error_reporting" },
	{ 0x5ed90adc, "int_to_scsilun" },
	{ 0x801c5d2, "scsi_internal_device_unblock_nowait" },
	{ 0x37a0cba, "kfree" },
	{ 0x250ffaa1, "dma_direct_map_sg" },
	{ 0x9d63b41f, "scsi_dma_unmap" },
	{ 0x69acdf38, "memcpy" },
	{ 0x7e4f7dad, "sas_port_alloc_num" },
	{ 0x6dc87645, "param_array_ops" },
	{ 0xedc03953, "iounmap" },
	{ 0x6d8c812e, "scsi_get_vpd_page" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0xf2536a31, "kill_fasync" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0x121da905, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x28318305, "snprintf" },
	{ 0xee7915ff, "pci_choose_state" },
	{ 0xec89da9c, "param_ops_ushort" },
	{ 0xc4f6749f, "bsg_job_done" },
	{ 0x6548e55e, "pci_enable_device_mem" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x48132457, "pci_release_selected_regions" },
	{ 0x2ca6809b, "pci_request_selected_regions" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0x432fe2e1, "dma_pool_create" },
	{ 0xf49409b0, "misc_deregister" },
	{ 0x21984922, "sas_enable_tlr" },
	{ 0xc2e587d1, "reset_devices" },
	{ 0x36b3d463, "dma_ops" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x93527c4c, "pci_save_state" },
	{ 0xe914e41e, "strcpy" },
	{ 0x9f5ad794, "param_ops_ullong" },
	{ 0xe94d9e1d, "scsi_dma_map" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=scsi_transport_sas,raid_class";

MODULE_ALIAS("pci:v00001000d00000070sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000072sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000074sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000076sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000077sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000064sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000065sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000080sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000081sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000082sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000083sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000084sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000085sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000086sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000087sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d0000006Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000002B0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d0000007Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000096sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000097sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000090sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000091sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000094sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000095sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000C9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000C4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000C5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000C6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000C7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000C8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000C0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000C1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000C2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000C3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000ADsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000AEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000AFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000AAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000ABsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000ACsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000D1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000E1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000E2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000E5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000E6sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "772EA97380FBAF9F7F8F152");
MODULE_INFO(rhelversion, "8.0");
