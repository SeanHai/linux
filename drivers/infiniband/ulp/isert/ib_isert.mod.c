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
	{ 0x7300a5ca, "iscsit_unregister_transport" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x4456d5f, "iscsit_register_transport" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x2a70864d, "__cpu_possible_mask" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0x577b7f6a, "rdma_reject_msg" },
	{ 0x907df803, "rdma_event_msg" },
	{ 0xcf2a6966, "up" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x16939bc9, "rdma_listen" },
	{ 0x9e1a8ee6, "rdma_bind_addr" },
	{ 0x27e40164, "__rdma_create_id" },
	{ 0xed946a48, "init_net" },
	{ 0x8ce0a765, "__rdma_accept" },
	{ 0xad99006, "__ib_alloc_pd" },
	{ 0x73896ef4, "__ib_alloc_cq" },
	{ 0x31cd8869, "__cpu_online_mask" },
	{ 0xdc341bca, "rdma_reject" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xe698f83e, "target_execute_cmd" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x6d89eedb, "transport_generic_request_failure" },
	{ 0x160a932f, "iscsit_logout_post_handler" },
	{ 0xa851d486, "iscsit_tmr_post_handler" },
	{ 0xa202a8e5, "kmalloc_order_trace" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0xb86b1314, "iscsit_build_task_mgt_rsp" },
	{ 0x8efad0a8, "iscsit_build_reject" },
	{ 0x5388fc75, "iscsit_build_logout_rsp" },
	{ 0x12d9e9a8, "iscsit_build_text_rsp" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0xf7d6636f, "current_task" },
	{ 0x7dd0c6ce, "rdma_destroy_id" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xabe82e3d, "ib_destroy_qp" },
	{ 0xd0edfd15, "dma_direct_unmap_page" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xef075ba2, "iscsit_cause_connection_reinstatement" },
	{ 0x28c06d05, "iscsit_handle_task_mgt_cmd" },
	{ 0xc7f2def5, "iscsit_check_dataout_payload" },
	{ 0xb4568c2f, "iscsit_check_dataout_hdr" },
	{ 0x2d9fe861, "iscsit_set_unsoliticed_dataout" },
	{ 0x6dbb7a32, "iscsit_sequence_cmd" },
	{ 0x905695ab, "sg_copy_from_buffer" },
	{ 0x3b8a9a99, "iscsit_process_scsi_cmd" },
	{ 0x432a23e5, "iscsit_setup_scsi_cmd" },
	{ 0x8602791, "iscsit_process_nop_out" },
	{ 0x3199ead6, "iscsit_setup_nop_out" },
	{ 0xd2cc9180, "iscsit_process_text_cmd" },
	{ 0x69acdf38, "memcpy" },
	{ 0x96e6d2d0, "iscsit_setup_text_cmd" },
	{ 0x26d66e85, "iscsit_find_cmd_from_itt" },
	{ 0xba0bbc41, "iscsit_handle_logout_cmd" },
	{ 0xc41c945e, "dma_direct_sync_single_for_device" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x121da905, "queue_work_on" },
	{ 0xf750b0c9, "target_wait_for_sess_cmds" },
	{ 0xe354bc7f, "target_sess_cmd_list_set_waiting" },
	{ 0x9ac06fe, "ib_drain_qp" },
	{ 0xcfaa5add, "target_put_sess_cmd" },
	{ 0x32120713, "iscsit_release_cmd" },
	{ 0x5f0447d8, "transport_generic_free_cmd" },
	{ 0x41f4233b, "iscsit_build_nopin_rsp" },
	{ 0xeef4bd8d, "iscsit_build_rsp_pdu" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x1aa6f7d9, "dma_direct_map_page" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xff4f5a38, "dma_direct_sync_single_for_cpu" },
	{ 0x36b3d463, "dma_ops" },
	{ 0x25170ad2, "down_interruptible" },
	{ 0x68871e48, "ib_dealloc_pd" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xfc92ae6d, "iscsit_stop_dataout_timer" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x126375f, "rdma_rw_ctx_destroy_signature" },
	{ 0x79e03bba, "rdma_rw_ctx_destroy" },
	{ 0xcb38818a, "iscsit_allocate_cmd" },
	{ 0xf6e52357, "rdma_disconnect" },
	{ 0xe5840ec6, "ib_wc_status_msg" },
	{ 0xf7308d9a, "rdma_create_qp" },
	{ 0x37a0cba, "kfree" },
	{ 0x61fb450b, "ib_free_cq" },
	{ 0x2e5cfcc9, "rdma_rw_ctx_signature_init" },
	{ 0x5f7a81cb, "rdma_rw_ctx_post" },
	{ 0x8c6038f, "rdma_rw_ctx_init" },
	{ 0x1da553aa, "ib_check_mr_status" },
	{ 0x262e823a, "wait_for_completion_interruptible" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x29361773, "complete" },
	{ 0xd1e4ec46, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xaba90a34, "rdma_notify" },
	{ 0xf6ed3334, "ib_event_msg" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x27e1a049, "printk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=iscsi_target_mod,rdma_cm,ib_core,target_core_mod";


MODULE_INFO(srcversion, "B29540FC7EC247A667C1DC2");
MODULE_INFO(rhelversion, "8.0");
