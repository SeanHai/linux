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
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x9706372e, "scsi_change_queue_depth" },
	{ 0x2b8ab42, "sg_copy_to_buffer" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0xb9a8986d, "pci_write_config_word" },
	{ 0xf5284f7e, "debugfs_create_dir" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x9b5d76b9, "scsi_host_alloc" },
	{ 0x1aad2708, "scsi_track_queue_full" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0x754d539c, "strlen" },
	{ 0xdd5c21c, "pci_read_config_byte" },
	{ 0xb559ea59, "scsi_add_host_with_dma" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0xa9320d27, "ktime_get_seconds" },
	{ 0xa54c0ba0, "dma_set_mask" },
	{ 0x905695ab, "sg_copy_from_buffer" },
	{ 0xe637fa94, "dev_printk" },
	{ 0xb8cec420, "pcie_set_readrq" },
	{ 0xdfb2ae49, "pci_disable_device" },
	{ 0x801ccfdf, "scsi_is_fc_rport" },
	{ 0x862fba34, "pci_disable_msix" },
	{ 0x87b8798d, "sg_next" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xb46a45f, "pci_release_regions" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0xea3c8e4e, "scsilun_to_int" },
	{ 0x999e8297, "vfree" },
	{ 0xbf18e27, "pcie_get_readrq" },
	{ 0xeddfd55a, "dma_free_attrs" },
	{ 0xb03676a8, "debugfs_create_file" },
	{ 0x375f8bbd, "fc_get_event_number" },
	{ 0x9867faf6, "scsi_cmd_get_serial" },
	{ 0x91715312, "sprintf" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0xeb81585a, "kthread_create_on_node" },
	{ 0xe4bf7f13, "dma_set_coherent_mask" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x103b0514, "param_ops_charp" },
	{ 0x50fe27c8, "pci_set_master" },
	{ 0xf9c0b663, "strlcat" },
	{ 0xab769aaf, "scsi_is_host_device" },
	{ 0xec02a35f, "del_timer_sync" },
	{ 0xfb578fc5, "memset" },
	{ 0xdba47dbc, "pci_enable_pcie_error_reporting" },
	{ 0x701843ca, "idr_destroy" },
	{ 0x56898d73, "pci_restore_state" },
	{ 0xc94fb8eb, "pci_iounmap" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xf7d6636f, "current_task" },
	{ 0x27e1a049, "printk" },
	{ 0x20c55ae0, "sscanf" },
	{ 0xc2e1f262, "kthread_stop" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0x7b6bc055, "fc_vport_terminate" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xb672fc65, "fixed_size_llseek" },
	{ 0xf33f3525, "pci_read_config_word" },
	{ 0x79a335e9, "debugfs_remove" },
	{ 0x5792f848, "strlcpy" },
	{ 0x80d50279, "dma_alloc_attrs" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x3f76a777, "fc_remote_port_rolechg" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x1e6d26a8, "strstr" },
	{ 0x28985b9f, "mod_timer" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x787b953, "idr_alloc" },
	{ 0xefd9029, "scsi_host_put" },
	{ 0xe8afab37, "fc_vport_create" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x69ac23c0, "idr_remove" },
	{ 0xdcd9eee9, "fc_host_post_vendor_event" },
	{ 0x733dc065, "scsi_device_put" },
	{ 0x5bef5c60, "fc_release_transport" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x21f51fb1, "pci_enable_msix_range" },
	{ 0x709bd92f, "pci_cleanup_aer_uncorrect_error_status" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xd78d3880, "fc_remote_port_delete" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xa202a8e5, "kmalloc_order_trace" },
	{ 0xd2491c3c, "scsi_device_lookup" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xa975ccbd, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x76d1f14a, "__scsi_iterate_devices" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x53facd95, "fc_eh_timed_out" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x78c6770, "pci_disable_pcie_error_reporting" },
	{ 0x5ed90adc, "int_to_scsilun" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d63b41f, "scsi_dma_unmap" },
	{ 0x69acdf38, "memcpy" },
	{ 0x3c24cba5, "pci_request_regions" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0xb19bcd89, "fc_remove_host" },
	{ 0xf82eea4a, "request_firmware" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x7256f41e, "scsi_remove_host" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x121da905, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x28318305, "snprintf" },
	{ 0x85ce3360, "fc_remote_port_add" },
	{ 0x25c5ba6e, "pci_iomap" },
	{ 0xc4f6749f, "bsg_job_done" },
	{ 0x5e515be6, "ktime_get_ts64" },
	{ 0x1d29dff0, "pci_enable_device" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0x8f221a11, "fc_attach_transport" },
	{ 0x84277b2a, "release_firmware" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x93527c4c, "pci_save_state" },
	{ 0xe914e41e, "strcpy" },
	{ 0xe94d9e1d, "scsi_dma_map" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=scsi_transport_fc";

MODULE_ALIAS("pci:v00001657d00000013sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001657d00000017sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001657d00000014sv*sd*bc0Csc04i00*");
MODULE_ALIAS("pci:v00001657d00000021sv*sd*bc0Csc04i00*");
MODULE_ALIAS("pci:v00001657d00000022sv*sd*bc0Csc04i00*");
MODULE_ALIAS("pci:v00001657d00000023sv*sd*bc0Csc04i00*");

MODULE_INFO(srcversion, "4FA01F27282DA18FAD3C738");
MODULE_INFO(rhelversion, "8.0");
