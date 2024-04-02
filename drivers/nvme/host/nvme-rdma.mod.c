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
	{ 0x4a7d1adc, "blk_mq_rdma_map_queues" },
	{ 0xbb8c805, "dma_direct_unmap_sg" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xc1a89ec, "blk_cleanup_queue" },
	{ 0xbb84f7b6, "sg_alloc_table_chained" },
	{ 0xd1f6e607, "rdma_consumer_reject_data" },
	{ 0x68871e48, "ib_dealloc_pd" },
	{ 0x9ac06fe, "ib_drain_qp" },
	{ 0xf369dcfb, "nvme_stop_ctrl" },
	{ 0xa8e2800c, "blk_mq_tagset_busy_iter" },
	{ 0xe288808d, "blk_mq_start_request" },
	{ 0x4c7dbf9c, "nvmf_register_transport" },
	{ 0x617091c1, "ib_mr_pool_put" },
	{ 0xabe82e3d, "ib_destroy_qp" },
	{ 0x1ca6941, "ib_mr_pool_get" },
	{ 0xc1c794e, "delayed_work_timer_fn" },
	{ 0xb6149067, "nvme_shutdown_ctrl" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x81b1b255, "cancel_work_sync" },
	{ 0xc5b38dbe, "nvme_set_queue_count" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0xff4f5a38, "dma_direct_sync_single_for_cpu" },
	{ 0xa11cce5e, "nvme_stop_queues" },
	{ 0xa1ffbb27, "blk_mq_tag_to_rq" },
	{ 0x27e40164, "__rdma_create_id" },
	{ 0xcabdc210, "nvme_complete_async_event" },
	{ 0x799510a9, "nvmf_should_reconnect" },
	{ 0x7dd0c6ce, "rdma_destroy_id" },
	{ 0xfb166cb4, "param_ops_bool" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0x61fb450b, "ib_free_cq" },
	{ 0x68f927fb, "cancel_delayed_work_sync" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0x8519f7c, "blk_mq_complete_request" },
	{ 0xebc1586b, "nvmf_reg_write32" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x1a5a8544, "blk_mq_update_nr_hw_queues" },
	{ 0xe5840ec6, "ib_wc_status_msg" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x61bf4d45, "rdma_connect" },
	{ 0x2ad9427a, "blk_mq_init_queue" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0xbcd8838a, "nvme_enable_ctrl" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x813cf212, "nvme_io_timeout" },
	{ 0x27e1a049, "printk" },
	{ 0x3047d077, "nvmf_connect_admin_queue" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x31cd8869, "__cpu_online_mask" },
	{ 0xbdb2e32a, "rdma_destroy_qp" },
	{ 0x21f7fd27, "blk_mq_free_tag_set" },
	{ 0x8cd74356, "nvme_init_identify" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xb46e47e, "inet_pton_with_scope" },
	{ 0xc1bd0303, "nvmf_reg_read64" },
	{ 0x73896ef4, "__ib_alloc_cq" },
	{ 0x1aa6f7d9, "dma_direct_map_page" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xed946a48, "init_net" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x9bec3675, "ib_map_mr_sg" },
	{ 0xf7308d9a, "rdma_create_qp" },
	{ 0xd58bbbcb, "nvme_delete_wq" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x53e19a59, "nvme_init_ctrl" },
	{ 0x8f5144a6, "ib_register_client" },
	{ 0xd0edfd15, "dma_direct_unmap_page" },
	{ 0xe6478472, "_dev_info" },
	{ 0xecc3eb03, "rdma_resolve_route" },
	{ 0x5799d532, "nvme_change_ctrl_state" },
	{ 0xd0c86c05, "put_device" },
	{ 0xff9222ba, "nvmf_unregister_transport" },
	{ 0xd1e4ec46, "queue_delayed_work_on" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xe3f96e3d, "nvme_cleanup_cmd" },
	{ 0x5424d16, "nvme_cancel_request" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xa33c0eac, "wait_for_completion_interruptible_timeout" },
	{ 0xfac3a5c, "nvmf_get_address" },
	{ 0xea4fcb9c, "blk_rq_map_sg" },
	{ 0xa20b232a, "blk_mq_alloc_tag_set" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf6e52357, "rdma_disconnect" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xcce9155, "nvme_disable_ctrl" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x85ffabba, "get_device" },
	{ 0xf6ed3334, "ib_event_msg" },
	{ 0x92a41363, "nvme_delete_ctrl" },
	{ 0xf1a75a3e, "nvmf_reg_read32" },
	{ 0x64b62862, "nvme_wq" },
	{ 0xf3a0e966, "__nvmf_check_ready" },
	{ 0x51803df3, "sg_free_table_chained" },
	{ 0x93228d92, "ib_mr_pool_init" },
	{ 0x37a0cba, "kfree" },
	{ 0x250ffaa1, "dma_direct_map_sg" },
	{ 0x42d54e91, "blk_mq_quiesce_queue" },
	{ 0x50f72708, "nvmf_connect_io_queue" },
	{ 0x886ca932, "blk_mq_unquiesce_queue" },
	{ 0x24847958, "nvme_start_ctrl" },
	{ 0xc41c945e, "dma_direct_sync_single_for_device" },
	{ 0xeea8612a, "rdma_resolve_addr" },
	{ 0x65b3cec0, "nvme_setup_cmd" },
	{ 0x9723604b, "nvme_stop_keep_alive" },
	{ 0xd45434ee, "admin_timeout" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0xad99006, "__ib_alloc_pd" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x828aa1fe, "nvme_start_queues" },
	{ 0x8dc826cc, "nvmf_free_options" },
	{ 0x121da905, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x65e62e05, "nvmf_fail_nonready_command" },
	{ 0x907df803, "rdma_event_msg" },
	{ 0x577b7f6a, "rdma_reject_msg" },
	{ 0x72ce5d32, "nvme_complete_rq" },
	{ 0x2ebe1831, "nvme_uninit_ctrl" },
	{ 0x18e7ea17, "ib_unregister_client" },
	{ 0x36b3d463, "dma_ops" },
	{ 0xb47a5d1e, "ib_mr_pool_destroy" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rdma_cm,ib_core,nvme-core,nvme-fabrics";


MODULE_INFO(srcversion, "047B13A624A2745B5420A2A");
MODULE_INFO(rhelversion, "8.0");
