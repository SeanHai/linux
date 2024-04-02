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
	{ 0xbb8c805, "dma_direct_unmap_sg" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd7c584a, "pci_write_config_dword" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x9706372e, "scsi_change_queue_depth" },
	{ 0x6413c273, "nvme_fc_register_localport" },
	{ 0x2b8ab42, "sg_copy_to_buffer" },
	{ 0xdf7e4b04, "pci_enable_sriov" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0xde455655, "pci_free_irq_vectors" },
	{ 0x9b76f02f, "sysfs_remove_bin_file" },
	{ 0xb9a8986d, "pci_write_config_word" },
	{ 0xf5284f7e, "debugfs_create_dir" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0x349cba85, "strchr" },
	{ 0x9b5d76b9, "scsi_host_alloc" },
	{ 0x20eadeb6, "ip_compute_csum" },
	{ 0xd12e564, "nvme_fc_register_remoteport" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0xfa5223cc, "del_timer" },
	{ 0x754d539c, "strlen" },
	{ 0x767ddb02, "set_memory_wc" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0xdd5c21c, "pci_read_config_byte" },
	{ 0xb559ea59, "scsi_add_host_with_dma" },
	{ 0x661bca60, "scsi_block_requests" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0xa9320d27, "ktime_get_seconds" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0xa54c0ba0, "dma_set_mask" },
	{ 0x905695ab, "sg_copy_from_buffer" },
	{ 0xe637fa94, "dev_printk" },
	{ 0x1057db90, "scsi_unblock_requests" },
	{ 0xdfb2ae49, "pci_disable_device" },
	{ 0x801ccfdf, "scsi_is_fc_rport" },
	{ 0x51e67f3b, "nvmet_fc_rcv_ls_req" },
	{ 0x3884f8b8, "nvme_fc_unregister_localport" },
	{ 0x8112b3d2, "scsi_build_sense_buffer" },
	{ 0xd48c7500, "pci_disable_sriov" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x9300507b, "mempool_destroy" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x87b8798d, "sg_next" },
	{ 0x3288792d, "pci_write_config_byte" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x177847e, "cpu_info" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0x85df9b6c, "strsep" },
	{ 0xea3c8e4e, "scsilun_to_int" },
	{ 0xeddfd55a, "dma_free_attrs" },
	{ 0xb03676a8, "debugfs_create_file" },
	{ 0x375f8bbd, "fc_get_event_number" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0xb5aa7165, "dma_pool_destroy" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x91715312, "sprintf" },
	{ 0x7fa5302a, "nvmet_fc_rcv_fcp_abort" },
	{ 0xeb81585a, "kthread_create_on_node" },
	{ 0xe4bf7f13, "dma_set_coherent_mask" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7efc8dd6, "blk_mq_unique_tag" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x50fe27c8, "pci_set_master" },
	{ 0xf9c0b663, "strlcat" },
	{ 0xab769aaf, "scsi_is_host_device" },
	{ 0x6bddef80, "misc_register" },
	{ 0xec02a35f, "del_timer_sync" },
	{ 0x898c27fe, "pci_alloc_irq_vectors_affinity" },
	{ 0x60ea2d6, "kstrtoull" },
	{ 0xfb578fc5, "memset" },
	{ 0xdba47dbc, "pci_enable_pcie_error_reporting" },
	{ 0x701843ca, "idr_destroy" },
	{ 0x56898d73, "pci_restore_state" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xf7d6636f, "current_task" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x57a9e884, "sg_miter_start" },
	{ 0x27e1a049, "printk" },
	{ 0x20c55ae0, "sscanf" },
	{ 0xc2e1f262, "kthread_stop" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x31cd8869, "__cpu_online_mask" },
	{ 0x479c3c86, "find_next_zero_bit" },
	{ 0x7b6bc055, "fc_vport_terminate" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x9166fada, "strncpy" },
	{ 0x110b1d91, "sg_miter_stop" },
	{ 0xb672fc65, "fixed_size_llseek" },
	{ 0x5a921311, "strncmp" },
	{ 0xf33f3525, "pci_read_config_word" },
	{ 0x79a335e9, "debugfs_remove" },
	{ 0x5792f848, "strlcpy" },
	{ 0xfca9dc99, "nvme_fc_unregister_remoteport" },
	{ 0x80d50279, "dma_alloc_attrs" },
	{ 0x3f76a777, "fc_remote_port_rolechg" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x9ef76d99, "nvmet_fc_unregister_targetport" },
	{ 0x28985b9f, "mod_timer" },
	{ 0x79fe1b07, "init_uts_ns" },
	{ 0x2f7754a8, "dma_pool_free" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x787b953, "idr_alloc" },
	{ 0x9a910d01, "simple_open" },
	{ 0x6e7e75f4, "request_firmware_nowait" },
	{ 0xefd9029, "scsi_host_put" },
	{ 0x1048b92a, "nvmet_fc_rcv_fcp_req" },
	{ 0xe8afab37, "fc_vport_create" },
	{ 0xfcec1a67, "pci_enable_msi" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x8fc50580, "sg_miter_next" },
	{ 0xe7b9136, "pci_device_support_removed" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xb5848bae, "__iowrite32_copy" },
	{ 0x69ac23c0, "idr_remove" },
	{ 0xdcd9eee9, "fc_host_post_vendor_event" },
	{ 0x5bef5c60, "fc_release_transport" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x1aebf90d, "nvmet_fc_register_targetport" },
	{ 0xe68fed60, "pci_select_bars" },
	{ 0x97ab9ad3, "pv_irq_ops" },
	{ 0xb794cada, "fc_host_post_event" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x86c45796, "mempool_alloc" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xa916b694, "strnlen" },
	{ 0xaff06b0c, "scsi_host_get" },
	{ 0xd0c86c05, "put_device" },
	{ 0x93fca811, "__get_free_pages" },
	{ 0x709bd92f, "pci_cleanup_aer_uncorrect_error_status" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xd78d3880, "fc_remote_port_delete" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0xa202a8e5, "kmalloc_order_trace" },
	{ 0x6a244503, "mempool_create" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0xea5d4033, "fc_block_scsi_eh" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xe1f4fcf5, "pci_read_config_dword" },
	{ 0x6a037cf1, "mempool_kfree" },
	{ 0xcd8dd495, "dma_pool_alloc" },
	{ 0xa975ccbd, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x74b55fe, "mempool_free" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x85ffabba, "get_device" },
	{ 0xe87f9ea8, "pci_try_set_mwi" },
	{ 0x76d1f14a, "__scsi_iterate_devices" },
	{ 0xa44d2dc1, "pci_irq_vector" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x53facd95, "fc_eh_timed_out" },
	{ 0x20f5048a, "pci_set_power_state" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xa05c03df, "mempool_kmalloc" },
	{ 0x78c6770, "pci_disable_pcie_error_reporting" },
	{ 0x5ed90adc, "int_to_scsilun" },
	{ 0x37a0cba, "kfree" },
	{ 0x250ffaa1, "dma_direct_map_sg" },
	{ 0x9d63b41f, "scsi_dma_unmap" },
	{ 0x69acdf38, "memcpy" },
	{ 0x6dc87645, "param_array_ops" },
	{ 0x88cfc160, "pci_disable_msi" },
	{ 0xedc03953, "iounmap" },
	{ 0xa8af86d0, "sysfs_create_bin_file" },
	{ 0x69f8785f, "__cpu_present_mask" },
	{ 0xdec4b638, "set_user_nice" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0xb19bcd89, "fc_remove_host" },
	{ 0x4ca9669f, "scnprintf" },
	{ 0xf82eea4a, "request_firmware" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0xc666a132, "crc_t10dif" },
	{ 0xb742fd7, "simple_strtol" },
	{ 0x7256f41e, "scsi_remove_host" },
	{ 0x121da905, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x28318305, "snprintf" },
	{ 0x85ce3360, "fc_remote_port_add" },
	{ 0xc4f6749f, "bsg_job_done" },
	{ 0x6548e55e, "pci_enable_device_mem" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xe3fffae9, "__x86_indirect_thunk_rbp" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x8a9cf5a7, "nvme_fc_set_remoteport_devloss" },
	{ 0x48132457, "pci_release_selected_regions" },
	{ 0x2ca6809b, "pci_request_selected_regions" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0xc054ebe3, "param_ops_ulong" },
	{ 0x432fe2e1, "dma_pool_create" },
	{ 0x8f648a94, "param_ops_uint" },
	{ 0xf49409b0, "misc_deregister" },
	{ 0xa063d0db, "pci_find_ext_capability" },
	{ 0x8f221a11, "fc_attach_transport" },
	{ 0x84277b2a, "release_firmware" },
	{ 0x36b3d463, "dma_ops" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x93527c4c, "pci_save_state" },
	{ 0x9f5ad794, "param_ops_ullong" },
	{ 0xe94d9e1d, "scsi_dma_map" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nvme-fc,scsi_transport_fc,nvmet-fc";

MODULE_ALIAS("pci:v000010DFd0000FB00sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd00001AE5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000FA00sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000F980sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000F900sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000F800sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000F700sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000F095sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000F098sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000F0F5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000F0F6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000F0F7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000FD00sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000FD11sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000FD12sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000F0D5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000F0D1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000FE00sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000FE05sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000FE11sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000FE12sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000F0E5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000F0E1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000F0A5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000F0A1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000FC00sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000FC10sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000FC20sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000F100sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000F015sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000F011sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000F112sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000F111sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000FC40sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000E100sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000E180sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000FC50sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000019A2d00000704sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000019A2d00000714sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000F180sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000E131sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000E200sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000E260sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000E208sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000E268sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000E300sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000F400sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd00000724sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000072Csv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "2F43EF1A76C2254CE63766B");
MODULE_INFO(rhelversion, "8.0");
