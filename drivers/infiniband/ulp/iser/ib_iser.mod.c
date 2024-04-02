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
	{ 0xb9338741, "kmem_cache_destroy" },
	{ 0xbb8c805, "dma_direct_unmap_sg" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x9706372e, "scsi_change_queue_depth" },
	{ 0x5f27a433, "iscsi_host_remove" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0xf7686e25, "ib_fmr_pool_map_phys" },
	{ 0x68871e48, "ib_dealloc_pd" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0x4a0e5a8, "iscsi_queuecommand" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x4186e54c, "iscsi_conn_stop" },
	{ 0xff4f5a38, "dma_direct_sync_single_for_cpu" },
	{ 0x87b8798d, "sg_next" },
	{ 0x27e40164, "__rdma_create_id" },
	{ 0xe1eaf333, "iscsi_eh_recover_target" },
	{ 0x48d82af9, "iscsi_unregister_transport" },
	{ 0xbf8c9136, "iscsi_conn_get_addr_param" },
	{ 0xc92e622f, "iscsi_session_teardown" },
	{ 0x7dd0c6ce, "rdma_destroy_id" },
	{ 0xfb166cb4, "param_ops_bool" },
	{ 0x61fb450b, "ib_free_cq" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x3c1a8888, "iscsi_host_add" },
	{ 0xc32b59ff, "ib_destroy_fmr_pool" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xd15546f9, "blk_queue_virt_boundary" },
	{ 0x91715312, "sprintf" },
	{ 0x8c6b091a, "iscsi_host_alloc" },
	{ 0xe5840ec6, "ib_wc_status_msg" },
	{ 0xa383f7cd, "iscsi_lookup_endpoint" },
	{ 0x61bf4d45, "rdma_connect" },
	{ 0xb378c2af, "iscsi_itt_to_ctask" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xd7635d4c, "ib_alloc_mr" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xab769aaf, "scsi_is_host_device" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x2ebf86ce, "iscsi_conn_start" },
	{ 0x27e1a049, "printk" },
	{ 0x20c55ae0, "sscanf" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x31cd8869, "__cpu_online_mask" },
	{ 0x1da553aa, "ib_check_mr_status" },
	{ 0xbdb2e32a, "rdma_destroy_qp" },
	{ 0x7c3f917c, "iscsi_conn_send_pdu" },
	{ 0x18de717d, "iscsi_session_get_param" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x7b19ddc5, "iscsi_host_set_param" },
	{ 0x262e823a, "wait_for_completion_interruptible" },
	{ 0x73ff3bc9, "iscsi_conn_teardown" },
	{ 0xe3edc729, "iscsi_put_task" },
	{ 0x2b7a69d3, "iscsi_host_free" },
	{ 0x73896ef4, "__ib_alloc_cq" },
	{ 0xd601412e, "iscsi_conn_get_param" },
	{ 0x1aa6f7d9, "dma_direct_map_page" },
	{ 0x8a7de935, "kmem_cache_free" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xc721206f, "iscsi_destroy_endpoint" },
	{ 0xed946a48, "init_net" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x9bec3675, "ib_map_mr_sg" },
	{ 0xf7308d9a, "rdma_create_qp" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x2f6e9a13, "iscsi_set_param" },
	{ 0xd0edfd15, "dma_direct_unmap_page" },
	{ 0x537b8cde, "ib_unregister_event_handler" },
	{ 0xecc3eb03, "rdma_resolve_route" },
	{ 0x2b63e7fc, "kmem_cache_alloc" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x545cb60b, "ib_register_event_handler" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xa202a8e5, "kmalloc_order_trace" },
	{ 0xca09743e, "iscsi_register_transport" },
	{ 0xfd4ecf31, "iscsi_eh_device_reset" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xa33c0eac, "wait_for_completion_interruptible_timeout" },
	{ 0xd9f535cb, "ib_drain_sq" },
	{ 0x828b8098, "iscsi_prep_data_out_pdu" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf6e52357, "rdma_disconnect" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x9e711e29, "iscsi_complete_pdu" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x58ace4f3, "iscsi_conn_failure" },
	{ 0x89f8d2af, "ib_query_qp" },
	{ 0x8678453c, "kmem_cache_create" },
	{ 0x9e7b3614, "ib_dereg_mr" },
	{ 0xf6ed3334, "ib_event_msg" },
	{ 0x2626b6d6, "iscsi_eh_cmd_timed_out" },
	{ 0x2ab2fd84, "iscsi_suspend_queue" },
	{ 0x239b0683, "iscsi_create_endpoint" },
	{ 0xcce818da, "iscsi_eh_abort" },
	{ 0x37a0cba, "kfree" },
	{ 0x250ffaa1, "dma_direct_map_sg" },
	{ 0x4bf4d99d, "ib_sg_to_pages" },
	{ 0x69acdf38, "memcpy" },
	{ 0xee868d7e, "ib_create_fmr_pool" },
	{ 0xc41c945e, "dma_direct_sync_single_for_device" },
	{ 0xeea8612a, "rdma_resolve_addr" },
	{ 0x207ba8ad, "iscsi_session_setup" },
	{ 0x2bb0f125, "iscsi_host_get_param" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0xad99006, "__ib_alloc_pd" },
	{ 0x1aab669c, "iscsi_conn_bind" },
	{ 0x789b83dc, "iscsi_target_alloc" },
	{ 0xfff0647, "ib_fmr_pool_unmap" },
	{ 0x121da905, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x907df803, "rdma_event_msg" },
	{ 0x577b7f6a, "rdma_reject_msg" },
	{ 0xc7c40e45, "iscsi_session_recovery_timedout" },
	{ 0x8bc8d2d0, "iscsi_conn_setup" },
	{ 0x8f648a94, "param_ops_uint" },
	{ 0x36b3d463, "dma_ops" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libiscsi,ib_core,rdma_cm,scsi_transport_iscsi";


MODULE_INFO(srcversion, "AC36F928B551D5E77253EA6");
MODULE_INFO(rhelversion, "8.0");
