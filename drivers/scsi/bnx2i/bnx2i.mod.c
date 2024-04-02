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
	{ 0xb6e256b, "iscsi_offload_mesg" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x9706372e, "scsi_change_queue_depth" },
	{ 0xe4ba049, "__cpuhp_remove_state" },
	{ 0x5f27a433, "iscsi_host_remove" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0xcccdc4d6, "__iscsi_put_task" },
	{ 0xe637fa94, "dev_printk" },
	{ 0x4a0e5a8, "iscsi_queuecommand" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x4186e54c, "iscsi_conn_stop" },
	{ 0xe138ab3f, "pci_dev_get" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x87b8798d, "sg_next" },
	{ 0xe1eaf333, "iscsi_eh_recover_target" },
	{ 0x48d82af9, "iscsi_unregister_transport" },
	{ 0xc92e622f, "iscsi_session_teardown" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0xeddfd55a, "dma_free_attrs" },
	{ 0x3c1a8888, "iscsi_host_add" },
	{ 0x91715312, "sprintf" },
	{ 0x8c6b091a, "iscsi_host_alloc" },
	{ 0xeb81585a, "kthread_create_on_node" },
	{ 0xa383f7cd, "iscsi_lookup_endpoint" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xa792fd7f, "cpumask_next" },
	{ 0x764415ca, "kthread_bind" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xab769aaf, "scsi_is_host_device" },
	{ 0xec02a35f, "del_timer_sync" },
	{ 0xfb578fc5, "memset" },
	{ 0x2a70864d, "__cpu_possible_mask" },
	{ 0xc94fb8eb, "pci_iounmap" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xf7d6636f, "current_task" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x2ebf86ce, "iscsi_conn_start" },
	{ 0x27e1a049, "printk" },
	{ 0x20c55ae0, "sscanf" },
	{ 0xc2e1f262, "kthread_stop" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x31cd8869, "__cpu_online_mask" },
	{ 0x7c3f917c, "iscsi_conn_send_pdu" },
	{ 0x18de717d, "iscsi_session_get_param" },
	{ 0x73ff3bc9, "iscsi_conn_teardown" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x2b7a69d3, "iscsi_host_free" },
	{ 0xd601412e, "iscsi_conn_get_param" },
	{ 0x5792f848, "strlcpy" },
	{ 0x80d50279, "dma_alloc_attrs" },
	{ 0x286e42f, "blk_mq_rq_cpu" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x636af174, "cnic_unregister_driver" },
	{ 0xc721206f, "iscsi_destroy_endpoint" },
	{ 0x318f7969, "add_timer" },
	{ 0xf66a486e, "__cpuhp_setup_state" },
	{ 0xefd9029, "scsi_host_put" },
	{ 0x81533963, "sysfs_format_mac" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x82297185, "flush_signals" },
	{ 0x2f6e9a13, "iscsi_set_param" },
	{ 0xcc5b6e25, "iscsi_session_failure" },
	{ 0x618911fc, "numa_node" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0x26a9479a, "cnic_register_driver" },
	{ 0xca09743e, "iscsi_register_transport" },
	{ 0xfd4ecf31, "iscsi_eh_device_reset" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xa975ccbd, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x58ace4f3, "iscsi_conn_failure" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x2626b6d6, "iscsi_eh_cmd_timed_out" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x2ab2fd84, "iscsi_suspend_queue" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0x5ed90adc, "int_to_scsilun" },
	{ 0x150e3657, "_raw_read_lock_bh" },
	{ 0xad10eb8, "_raw_read_unlock_bh" },
	{ 0x239b0683, "iscsi_create_endpoint" },
	{ 0xcce818da, "iscsi_eh_abort" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d63b41f, "scsi_dma_unmap" },
	{ 0x69acdf38, "memcpy" },
	{ 0xedc03953, "iounmap" },
	{ 0xdec4b638, "set_user_nice" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0x207ba8ad, "iscsi_session_setup" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x2bb0f125, "iscsi_host_get_param" },
	{ 0x1aab669c, "iscsi_conn_bind" },
	{ 0x508e27d1, "__iscsi_complete_pdu" },
	{ 0x789b83dc, "iscsi_target_alloc" },
	{ 0x2c2719bd, "pci_dev_put" },
	{ 0x29361773, "complete" },
	{ 0x25c5ba6e, "pci_iomap" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xc7c40e45, "iscsi_session_recovery_timedout" },
	{ 0x8bc8d2d0, "iscsi_conn_setup" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x8f648a94, "param_ops_uint" },
	{ 0xb9a3cf46, "iscsi_itt_to_task" },
	{ 0x2d54308e, "iscsi_host_for_each_session" },
	{ 0xe94d9e1d, "scsi_dma_map" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=scsi_transport_iscsi,libiscsi,cnic";


MODULE_INFO(srcversion, "88563D26A3BCC226A40A967");
MODULE_INFO(rhelversion, "8.0");
