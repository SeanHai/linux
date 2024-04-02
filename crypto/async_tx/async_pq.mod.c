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
	{ 0xb81bf6c5, "alloc_pages_current" },
	{ 0xb0d904b7, "raid6_empty_zero_page" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x4b0c6f2d, "dmaengine_unmap_put" },
	{ 0x2b30f429, "raid6_call" },
	{ 0xc732a6e6, "async_tx_submit" },
	{ 0x27e1a049, "printk" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xfaea2088, "dmaengine_get_unmap_data" },
	{ 0x1aa6f7d9, "dma_direct_map_page" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xf6fcf68c, "__async_tx_find_channel" },
	{ 0x734d1ea8, "__free_pages" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x3352a126, "async_xor" },
	{ 0x2cb6fc9f, "async_tx_quiesce" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x17f54263, "raid6_gfexp" },
	{ 0x36b3d463, "dma_ops" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=raid6_pq,async_tx,async_xor";


MODULE_INFO(srcversion, "A35688F97872C8B23F1A38F");
MODULE_INFO(rhelversion, "8.0");
