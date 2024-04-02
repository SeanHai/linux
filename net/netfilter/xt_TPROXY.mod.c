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
	{ 0x8e91f949, "xt_unregister_targets" },
	{ 0x77a0f6e, "xt_register_targets" },
	{ 0xfadda605, "nf_tproxy_handle_time_wait4" },
	{ 0xb680d223, "nf_tproxy_laddr4" },
	{ 0x9dc32527, "nf_tproxy_get_sock_v4" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x9df058ca, "nf_tproxy_handle_time_wait6" },
	{ 0xe2da8b4d, "sock_edemux" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0x7f9c181f, "sock_gen_put" },
	{ 0x29a4b730, "nf_tproxy_laddr6" },
	{ 0x1ef81f95, "nf_tproxy_get_sock_v6" },
	{ 0x317cc4af, "skb_copy_bits" },
	{ 0xb34cb469, "ipv6_find_hdr" },
	{ 0x18585322, "nf_defrag_ipv4_enable" },
	{ 0x27e1a049, "printk" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xf694eec7, "nf_defrag_ipv6_enable" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_tproxy_ipv4,nf_tproxy_ipv6,nf_defrag_ipv4,nf_defrag_ipv6";


MODULE_INFO(srcversion, "72D462AC2422C00F79616DA");
MODULE_INFO(rhelversion, "8.0");
