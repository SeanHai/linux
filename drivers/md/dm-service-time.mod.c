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
	{ 0x6f6815e8, "dm_unregister_path_selector" },
	{ 0xe11f621a, "dm_register_path_selector" },
	{ 0x37a0cba, "kfree" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x27e1a049, "printk" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x20c55ae0, "sscanf" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x4ca9669f, "scnprintf" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dm-multipath";


MODULE_INFO(srcversion, "9D1512F7BF5C56817F8D25D");
MODULE_INFO(rhelversion, "8.0");
