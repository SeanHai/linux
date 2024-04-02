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
	{ 0x43dae11a, "nla_parse" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x754d539c, "strlen" },
	{ 0xf13b1dfb, "dev_get_by_index_rcu" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x183a470e, "__skb_get_hash" },
	{ 0xe3fffae9, "__x86_indirect_thunk_rbp" },
	{ 0x37a0cba, "kfree" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x448eac3e, "kmemdup" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0xfdc1bd61, "nla_put" },
	{ 0xf1e98c74, "avenrun" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "46530C69A70540DD1F2049C");
MODULE_INFO(rhelversion, "8.0");
