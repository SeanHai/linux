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
	{ 0x840342c6, "sgl_free" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0xa1f9a134, "__x86_indirect_thunk_rsi" },
	{ 0xff4f5a38, "dma_direct_sync_single_for_cpu" },
	{ 0x87b8798d, "sg_next" },
	{ 0x98ee3860, "nvmet_sq_init" },
	{ 0x5802f531, "ida_simple_get" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xaf9ba720, "nvmet_req_execute" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xe1c0f56a, "mark_driver_unsupported" },
	{ 0x2a70864d, "__cpu_possible_mask" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x27e1a049, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x99096e86, "ida_simple_remove" },
	{ 0x318aae03, "nvmet_register_transport" },
	{ 0x1aa6f7d9, "dma_direct_map_page" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xc1dc7ee, "nvmet_req_init" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xd0edfd15, "dma_direct_unmap_page" },
	{ 0x7ea95c9d, "nvmet_unregister_transport" },
	{ 0x5317d12d, "sgl_alloc" },
	{ 0xa916b694, "strnlen" },
	{ 0xd0c86c05, "put_device" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xa202a8e5, "kmalloc_order_trace" },
	{ 0xd02f829d, "nvmet_sq_destroy" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x85ffabba, "get_device" },
	{ 0x37a0cba, "kfree" },
	{ 0x250ffaa1, "dma_direct_map_sg" },
	{ 0x69acdf38, "memcpy" },
	{ 0xfba7ddd2, "match_u64" },
	{ 0xc41c945e, "dma_direct_sync_single_for_device" },
	{ 0x3b993cee, "nvmet_req_complete" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0x121da905, "queue_work_on" },
	{ 0x884ffdf2, "__cpu_active_mask" },
	{ 0x32178f3f, "ida_destroy" },
	{ 0x36b3d463, "dma_ops" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nvmet";


MODULE_INFO(srcversion, "54A9C5141A9258F4F2930DF");
MODULE_INFO(rhelversion, "8.0");
