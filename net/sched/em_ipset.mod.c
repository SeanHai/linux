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
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x58f85378, "__pskb_pull_tail" },
	{ 0xf13b1dfb, "dev_get_by_index_rcu" },
	{ 0x5def83f9, "skb_push" },
	{ 0x1b251e26, "ip_set_test" },
	{ 0x955c2e4e, "skb_pull" },
	{ 0x448eac3e, "kmemdup" },
	{ 0x5a0b9bc4, "ip_set_nfnl_get_byindex" },
	{ 0x37a0cba, "kfree" },
	{ 0xf1ff570e, "ip_set_nfnl_put" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ip_set";


MODULE_INFO(srcversion, "6108B419687F8B8B6C03922");
MODULE_INFO(rhelversion, "8.0");
