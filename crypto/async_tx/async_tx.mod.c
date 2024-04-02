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
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0x25eca242, "dma_find_channel" },
	{ 0x27e1a049, "printk" },
	{ 0x7c1372e8, "panic" },
	{ 0x923b1276, "dmaengine_get" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x57575f08, "dmaengine_put" },
	{ 0xac5eb9d7, "dma_wait_for_async_tx" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "7A0D92D448E64CE2B1D9EAF");
MODULE_INFO(rhelversion, "8.0");
