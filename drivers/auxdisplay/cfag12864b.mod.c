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
	{ 0x9b388444, "get_zeroed_page" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0xc1c794e, "delayed_work_timer_fn" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x14102f23, "ks0108_displaystate" },
	{ 0xb5a8d234, "cancel_delayed_work" },
	{ 0x27e1a049, "printk" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xbf4774db, "ks0108_writecontrol" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x4f506333, "ks0108_startline" },
	{ 0xedde6df2, "ks0108_page" },
	{ 0xd1e4ec46, "queue_delayed_work_on" },
	{ 0xfee8ef7b, "ks0108_address" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x37a0cba, "kfree" },
	{ 0x48a70518, "ks0108_writedata" },
	{ 0x6edae968, "ks0108_isinited" },
	{ 0x8f648a94, "param_ops_uint" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ks0108";


MODULE_INFO(srcversion, "2F5B030B823FF9F55B6CA02");
MODULE_INFO(rhelversion, "8.0");
