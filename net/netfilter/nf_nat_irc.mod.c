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
	{ 0x1b4bf5c4, "nf_nat_irc_hook" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0x1945e618, "nf_ct_unexpect_related" },
	{ 0x1836c51b, "nf_ct_helper_log" },
	{ 0x5e8c1fe2, "__nf_nat_mangle_tcp_packet" },
	{ 0x754d539c, "strlen" },
	{ 0x28318305, "snprintf" },
	{ 0x53e704ac, "nf_ct_expect_related_report" },
	{ 0xd89ff2b1, "nf_nat_follow_master" },
	{ 0x27e1a049, "printk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_conntrack_irc,nf_conntrack,nf_nat";


MODULE_INFO(srcversion, "3405CC697462CBFB48FB0D1");
MODULE_INFO(rhelversion, "8.0");
