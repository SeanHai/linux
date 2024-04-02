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
	{ 0x3fb3a977, "tcf_em_unregister" },
	{ 0xe515191b, "tcf_em_register" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xfe67ace3, "textsearch_prepare" },
	{ 0x124f0552, "skb_find_text" },
	{ 0x8dc45081, "textsearch_destroy" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x98f0c41b, "nla_append" },
	{ 0x60d29e61, "nla_put_nohdr" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x9166fada, "strncpy" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "8C4FB057220133433B97CF5");
MODULE_INFO(rhelversion, "8.0");
