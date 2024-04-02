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
	{ 0x5e75e377, "unregister_ip_vs_pe" },
	{ 0x71cd400b, "register_ip_vs_pe" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x58f85378, "__pskb_pull_tail" },
	{ 0x448eac3e, "kmemdup" },
	{ 0x5ca00193, "ct_sip_get_header" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xb34cb469, "ipv6_find_hdr" },
	{ 0x317cc4af, "skb_copy_bits" },
	{ 0x423d2e43, "ip_vs_new_conn_out" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ip_vs,nf_conntrack_sip";


MODULE_INFO(srcversion, "0EA7479CB137BD173BC4A38");
MODULE_INFO(rhelversion, "8.0");
