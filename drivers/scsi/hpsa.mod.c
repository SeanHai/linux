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
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0x3abba457, "sas_release_transport" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0xdf263d83, "sas_attach_transport" },
	{ 0x27e1a049, "printk" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0xc1c794e, "delayed_work_timer_fn" },
	{ 0x7bdd5516, "scsi_scan_host" },
	{ 0xb559ea59, "scsi_add_host_with_dma" },
	{ 0x2a70864d, "__cpu_possible_mask" },
	{ 0xe4bf7f13, "dma_set_coherent_mask" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x80d50279, "dma_alloc_attrs" },
	{ 0xa54c0ba0, "dma_set_mask" },
	{ 0x9b5d76b9, "scsi_host_alloc" },
	{ 0x2a303d4d, "check_signature" },
	{ 0xb9a8986d, "pci_write_config_word" },
	{ 0x56898d73, "pci_restore_state" },
	{ 0x20f5048a, "pci_set_power_state" },
	{ 0x93527c4c, "pci_save_state" },
	{ 0xf33f3525, "pci_read_config_word" },
	{ 0x8c69e82c, "pci_ioremap_bar" },
	{ 0x43132b0b, "pci_irq_get_affinity" },
	{ 0x898c27fe, "pci_alloc_irq_vectors_affinity" },
	{ 0x50fe27c8, "pci_set_master" },
	{ 0x3c24cba5, "pci_request_regions" },
	{ 0x1d29dff0, "pci_enable_device" },
	{ 0x96393c2a, "pci_disable_link_state" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x4a928de6, "mutex_lock_interruptible" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x337bba2d, "scsi_print_command" },
	{ 0x87b8798d, "sg_next" },
	{ 0xe94d9e1d, "scsi_dma_map" },
	{ 0x29361773, "complete" },
	{ 0x121da905, "queue_work_on" },
	{ 0x9d63b41f, "scsi_dma_unmap" },
	{ 0x60b40fd8, "copy_user_enhanced_fast_string" },
	{ 0xe5772d4a, "copy_user_generic_string" },
	{ 0xdcc3a419, "copy_user_generic_unrolled" },
	{ 0xf7d6636f, "current_task" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x8f9c199c, "__get_user_2" },
	{ 0xbffde8ec, "compat_alloc_user_space" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0x1057db90, "scsi_unblock_requests" },
	{ 0x661bca60, "scsi_block_requests" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x69acdf38, "memcpy" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xd1e4ec46, "queue_delayed_work_on" },
	{ 0xaff06b0c, "scsi_host_get" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xc8cdabbb, "sas_port_add_phy" },
	{ 0x4eab1ae7, "sas_phy_add" },
	{ 0xdb8d7b58, "sas_phy_alloc" },
	{ 0x27756bc8, "scsi_sanitize_inquiry_string" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xefd9029, "scsi_host_put" },
	{ 0x7256f41e, "scsi_remove_host" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x68f927fb, "cancel_delayed_work_sync" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x1aa6f7d9, "dma_direct_map_page" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x733dc065, "scsi_device_put" },
	{ 0xf50eb3eb, "scsi_remove_device" },
	{ 0xd2491c3c, "scsi_device_lookup" },
	{ 0xd61054c2, "sas_rphy_add" },
	{ 0xebd935b0, "sas_end_device_alloc" },
	{ 0x408bd9c1, "scsi_add_device" },
	{ 0xa202a8e5, "kmalloc_order_trace" },
	{ 0xd0edfd15, "dma_direct_unmap_page" },
	{ 0x36b3d463, "dma_ops" },
	{ 0x479c3c86, "find_next_zero_bit" },
	{ 0xe6478472, "_dev_info" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x5c260ec4, "sas_port_free" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xa9e17d7c, "sas_port_add" },
	{ 0x7e4f7dad, "sas_port_alloc_num" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xa792fd7f, "cpumask_next" },
	{ 0x31cd8869, "__cpu_online_mask" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0xe637fa94, "dev_printk" },
	{ 0xb46a45f, "pci_release_regions" },
	{ 0xdfb2ae49, "pci_disable_device" },
	{ 0xde455655, "pci_free_irq_vectors" },
	{ 0xedc03953, "iounmap" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xa44d2dc1, "pci_irq_vector" },
	{ 0xfbad3cf0, "scsi_normalize_sense" },
	{ 0x35465e15, "wait_for_completion_io" },
	{ 0x139cee21, "wait_for_completion_io_timeout" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xab769aaf, "scsi_is_host_device" },
	{ 0xad27f361, "__warn_printk" },
	{ 0x9706372e, "scsi_change_queue_depth" },
	{ 0x20c55ae0, "sscanf" },
	{ 0x9166fada, "strncpy" },
	{ 0xc6cbbc89, "capable" },
	{ 0x72ea7b2d, "scsi_device_type" },
	{ 0x4ca9669f, "scnprintf" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xfb578fc5, "memset" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x28318305, "snprintf" },
	{ 0x91715312, "sprintf" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xeddfd55a, "dma_free_attrs" },
	{ 0x259acd8e, "sas_port_delete" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x37a0cba, "kfree" },
	{ 0x4c60c165, "sas_phy_delete" },
	{ 0xa797fcd, "sas_port_delete_phy" },
	{ 0xf9a482f9, "msleep" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xc2e587d1, "reset_devices" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=scsi_transport_sas";

MODULE_ALIAS("pci:v0000103Cd0000323Asv0000103Csd00003241bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd0000323Asv0000103Csd00003243bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd0000323Asv0000103Csd00003245bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd0000323Asv0000103Csd00003247bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd0000323Asv0000103Csd00003249bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd0000323Asv0000103Csd0000324Abc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd0000323Asv0000103Csd0000324Bbc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd0000323Asv0000103Csd00003233bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd0000323Bsv0000103Csd00003350bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd0000323Bsv0000103Csd00003351bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd0000323Bsv0000103Csd00003352bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd0000323Bsv0000103Csd00003353bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd0000323Bsv0000103Csd00003354bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd0000323Bsv0000103Csd00003355bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd0000323Bsv0000103Csd00003356bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd0000323Csv0000103Csd00001920bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd0000323Csv0000103Csd00001921bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd0000323Csv0000103Csd00001922bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd0000323Csv0000103Csd00001923bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd0000323Csv0000103Csd00001924bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd0000323Csv0000103Csd00001925bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd0000323Csv0000103Csd00001926bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd0000323Csv0000103Csd00001928bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd0000323Csv0000103Csd00001929bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00003239sv0000103Csd000021BDbc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00003239sv0000103Csd000021BEbc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00003239sv0000103Csd000021BFbc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00003239sv0000103Csd000021C0bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00003239sv0000103Csd000021C1bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00003239sv0000103Csd000021C2bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00003239sv0000103Csd000021C3bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00003239sv0000103Csd000021C4bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00003239sv0000103Csd000021C5bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00003239sv0000103Csd000021C6bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00003239sv0000103Csd000021C7bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00003239sv0000103Csd000021C8bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00003239sv0000103Csd000021C9bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00003239sv0000103Csd000021CAbc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00003239sv0000103Csd000021CBbc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00003239sv0000103Csd000021CCbc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00003239sv0000103Csd000021CDbc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00003239sv0000103Csd000021CEbc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000290sv00009005sd00000580bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000290sv00009005sd00000581bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000290sv00009005sd00000582bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000290sv00009005sd00000583bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000290sv00009005sd00000584bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000290sv00009005sd00000585bc*sc*i*");
MODULE_ALIAS("pci:v00001590d00000075sv00001590sd00000076bc*sc*i*");
MODULE_ALIAS("pci:v00001590d00000075sv00001590sd00000087bc*sc*i*");
MODULE_ALIAS("pci:v00001590d00000075sv00001590sd0000007Dbc*sc*i*");
MODULE_ALIAS("pci:v00001590d00000075sv00001590sd00000088bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd0000333Fsv0000103Csd0000333Fbc*sc*i*");

MODULE_INFO(srcversion, "0A6D6A815A7D0A0F7BE5320");
MODULE_INFO(rhelversion, "8.0");
