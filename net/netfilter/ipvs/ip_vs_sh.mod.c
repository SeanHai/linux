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
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x6b0b7c28, "unregister_ip_vs_scheduler" },
	{ 0x6324745b, "register_ip_vs_scheduler" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x317cc4af, "skb_copy_bits" },
	{ 0x61415c0, "ip_vs_scheduler_err" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ip_vs";


MODULE_INFO(srcversion, "0A4AE8EF4D55338E5A7E24D");
MODULE_INFO(rhelversion, "8.0");
