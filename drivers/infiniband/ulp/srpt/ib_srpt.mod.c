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
	{ 0x18e7ea17, "ib_unregister_client" },
	{ 0x23aa905b, "target_unregister_template" },
	{ 0x8f5144a6, "ib_register_client" },
	{ 0xb4b724fe, "target_register_template" },
	{ 0xca8f6a65, "ib_send_cm_rep" },
	{ 0x8ce0a765, "__rdma_accept" },
	{ 0xaf8d9f6d, "ib_find_cached_pkey" },
	{ 0x4d223cc, "ib_create_qp" },
	{ 0xf7308d9a, "rdma_create_qp" },
	{ 0x49cc71e6, "target_alloc_session" },
	{ 0x5792f848, "strlcpy" },
	{ 0x73896ef4, "__ib_alloc_cq" },
	{ 0xdc341bca, "rdma_reject" },
	{ 0xe7ca2da7, "ib_send_cm_rej" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x4a928de6, "mutex_lock_interruptible" },
	{ 0xafa5fd0a, "ib_create_cm_id" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x545cb60b, "ib_register_event_handler" },
	{ 0xd1217aa9, "ib_cm_listen" },
	{ 0xc081bf98, "rdma_port_get_link_layer" },
	{ 0xad99006, "__ib_alloc_pd" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x1b83e3b6, "ib_create_srq" },
	{ 0x68871e48, "ib_dealloc_pd" },
	{ 0x97ab9ad3, "pv_irq_ops" },
	{ 0xa6aaa67f, "ib_set_client_data" },
	{ 0x81b1b255, "cancel_work_sync" },
	{ 0x537b8cde, "ib_unregister_event_handler" },
	{ 0x32c5fa9d, "ib_unregister_mad_agent" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xf596eb6a, "ib_send_cm_drep" },
	{ 0x40f9545d, "ib_send_cm_dreq" },
	{ 0xf6e52357, "rdma_disconnect" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x753712f5, "transport_send_check_condition_and_sense" },
	{ 0x894b45ad, "target_submit_cmd_map_sgls" },
	{ 0xff4f5a38, "dma_direct_sync_single_for_cpu" },
	{ 0x50a66bbf, "target_submit_tmr" },
	{ 0xea3c8e4e, "scsilun_to_int" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x61fb450b, "ib_free_cq" },
	{ 0xabe82e3d, "ib_destroy_qp" },
	{ 0x323b1ec9, "ib_destroy_cm_id" },
	{ 0xb54fb150, "transport_deregister_session" },
	{ 0x5f0f5fd4, "transport_deregister_session_configfs" },
	{ 0xf750b0c9, "target_wait_for_sess_cmds" },
	{ 0xe354bc7f, "target_sess_cmd_list_set_waiting" },
	{ 0x8d69473c, "ib_destroy_srq" },
	{ 0xd0edfd15, "dma_direct_unmap_page" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x638bffb7, "target_free_sgl" },
	{ 0x79e03bba, "rdma_rw_ctx_destroy" },
	{ 0x8c6038f, "rdma_rw_ctx_init" },
	{ 0x7a1d0d3c, "target_alloc_sgl" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x1aa6f7d9, "dma_direct_map_page" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xc41c945e, "dma_direct_sync_single_for_device" },
	{ 0x36b3d463, "dma_ops" },
	{ 0x69acdf38, "memcpy" },
	{ 0x6d89eedb, "transport_generic_request_failure" },
	{ 0x5f0447d8, "transport_generic_free_cmd" },
	{ 0xe698f83e, "target_execute_cmd" },
	{ 0x8c93546a, "ib_cm_init_qp_attr" },
	{ 0x2a0a66d5, "ib_post_send_mad" },
	{ 0x6afbc366, "ib_create_send_mad" },
	{ 0x406653b8, "ib_free_recv_mad" },
	{ 0x72812a5d, "ib_create_ah_from_wc" },
	{ 0x3af99bdd, "ib_modify_qp" },
	{ 0xcfaa5add, "target_put_sess_cmd" },
	{ 0xa05b0e3e, "rdma_rw_ctx_wrs" },
	{ 0xd3ee4e82, "core_tpg_register" },
	{ 0xa29b3225, "core_tpg_deregister" },
	{ 0xb46e47e, "inet_pton_with_scope" },
	{ 0x37500af1, "hex2bin" },
	{ 0x754d539c, "strlen" },
	{ 0x96b29254, "strncasecmp" },
	{ 0x20c55ae0, "sscanf" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x3fa0d062, "kstrtou16" },
	{ 0x7dd0c6ce, "rdma_destroy_id" },
	{ 0x16939bc9, "rdma_listen" },
	{ 0x9e1a8ee6, "rdma_bind_addr" },
	{ 0x27e40164, "__rdma_create_id" },
	{ 0xed946a48, "init_net" },
	{ 0x4ca9669f, "scnprintf" },
	{ 0x60ea2d6, "kstrtoull" },
	{ 0x86efc71c, "ib_free_send_mad" },
	{ 0x9aadd701, "rdma_destroy_ah" },
	{ 0xe9e8c57e, "ib_register_mad_agent" },
	{ 0x359e042, "ib_query_gid" },
	{ 0x9b7dd98c, "ib_query_port" },
	{ 0xc215ff46, "ib_modify_port" },
	{ 0x25efa329, "ib_cm_notify" },
	{ 0xaba90a34, "rdma_notify" },
	{ 0x37a0cba, "kfree" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x28318305, "snprintf" },
	{ 0x27e1a049, "printk" },
	{ 0xad27f361, "__warn_printk" },
	{ 0x121da905, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x2097a6fc, "ib_get_client_data" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x91715312, "sprintf" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ib_core,target_core_mod,ib_cm,rdma_cm";


MODULE_INFO(srcversion, "0A1292E8ECD657C8A6C6AEE");
MODULE_INFO(rhelversion, "8.0");
