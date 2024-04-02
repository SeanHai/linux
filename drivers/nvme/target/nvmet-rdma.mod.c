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
	{ 0x8c6038f, "rdma_rw_ctx_init" },
	{ 0xb81bf6c5, "alloc_pages_current" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xe613a798, "inet_addr_is_any" },
	{ 0x68871e48, "ib_dealloc_pd" },
	{ 0x4062af58, "nvmet_req_uninit" },
	{ 0x22e2f39a, "nvmet_ctrl_fatal_error" },
	{ 0x9ac06fe, "ib_drain_qp" },
	{ 0xabe82e3d, "ib_destroy_qp" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0xff4f5a38, "dma_direct_sync_single_for_cpu" },
	{ 0x27e40164, "__rdma_create_id" },
	{ 0x98ee3860, "nvmet_sq_init" },
	{ 0x7dd0c6ce, "rdma_destroy_id" },
	{ 0xfb166cb4, "param_ops_bool" },
	{ 0x61fb450b, "ib_free_cq" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x5802f531, "ida_simple_get" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x91715312, "sprintf" },
	{ 0xe5840ec6, "ib_wc_status_msg" },
	{ 0x1b83e3b6, "ib_create_srq" },
	{ 0xaf9ba720, "nvmet_req_execute" },
	{ 0x8ce0a765, "__rdma_accept" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x27e1a049, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x16939bc9, "rdma_listen" },
	{ 0x8d69473c, "ib_destroy_srq" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xb46e47e, "inet_pton_with_scope" },
	{ 0x99096e86, "ida_simple_remove" },
	{ 0x9cd1dd80, "rdma_set_afonly" },
	{ 0xaba90a34, "rdma_notify" },
	{ 0x73896ef4, "__ib_alloc_cq" },
	{ 0x318aae03, "nvmet_register_transport" },
	{ 0x1aa6f7d9, "dma_direct_map_page" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xed946a48, "init_net" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xa05b0e3e, "rdma_rw_ctx_wrs" },
	{ 0xc1b0d303, "nvmet_req_free_sgl" },
	{ 0xf7308d9a, "rdma_create_qp" },
	{ 0xc1dc7ee, "nvmet_req_init" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x8f5144a6, "ib_register_client" },
	{ 0x9e1a8ee6, "rdma_bind_addr" },
	{ 0xd0edfd15, "dma_direct_unmap_page" },
	{ 0x734d1ea8, "__free_pages" },
	{ 0x7ea95c9d, "nvmet_unregister_transport" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xd02f829d, "nvmet_sq_destroy" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf6e52357, "rdma_disconnect" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xdc341bca, "rdma_reject" },
	{ 0xf6ed3334, "ib_event_msg" },
	{ 0x5f7a81cb, "rdma_rw_ctx_post" },
	{ 0x37a0cba, "kfree" },
	{ 0xd024797b, "nvmet_req_alloc_sgl" },
	{ 0xc41c945e, "dma_direct_sync_single_for_device" },
	{ 0x3b993cee, "nvmet_req_complete" },
	{ 0xad99006, "__ib_alloc_pd" },
	{ 0x121da905, "queue_work_on" },
	{ 0x907df803, "rdma_event_msg" },
	{ 0x79e03bba, "rdma_rw_ctx_destroy" },
	{ 0x577b7f6a, "rdma_reject_msg" },
	{ 0x32178f3f, "ida_destroy" },
	{ 0x18e7ea17, "ib_unregister_client" },
	{ 0x36b3d463, "dma_ops" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ib_core,nvmet,rdma_cm";


MODULE_INFO(srcversion, "FEB42D55574A3BA2852C8B0");
MODULE_INFO(rhelversion, "8.0");
