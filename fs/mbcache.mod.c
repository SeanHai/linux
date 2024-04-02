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
	{ 0xb9338741, "kmem_cache_destroy" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xad27f361, "__warn_printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x8a7de935, "kmem_cache_free" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x2b63e7fc, "kmem_cache_alloc" },
	{ 0xa9a24d1f, "unregister_shrinker" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x8678453c, "kmem_cache_create" },
	{ 0x37a0cba, "kfree" },
	{ 0xc92f857d, "register_shrinker" },
	{ 0x121da905, "queue_work_on" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "E02D120F45B8E110D0A393B");
MODULE_INFO(rhelversion, "8.0");
