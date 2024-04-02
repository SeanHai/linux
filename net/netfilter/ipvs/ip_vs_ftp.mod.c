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
	{ 0xec89da9c, "param_ops_ushort" },
	{ 0x6dc87645, "param_array_ops" },
	{ 0xbb068623, "unregister_pernet_subsys" },
	{ 0xd45f511b, "register_pernet_subsys" },
	{ 0xf0701fb0, "ip_vs_conn_in_get" },
	{ 0xf2a7675d, "skb_make_writable" },
	{ 0x28318305, "snprintf" },
	{ 0x4be2f9b5, "ip_vs_conn_new" },
	{ 0x469387e1, "ip_vs_nfct_expect_related" },
	{ 0x5e8c1fe2, "__nf_nat_mangle_tcp_packet" },
	{ 0xfeda32a8, "ip_vs_conn_put" },
	{ 0x2b3deb62, "ip_vs_tcp_conn_listen" },
	{ 0xeb370f59, "ip_vs_conn_out_get" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x609bcd98, "in6_pton" },
	{ 0xac5fcec0, "in4_pton" },
	{ 0x96b29254, "strncasecmp" },
	{ 0x27e1a049, "printk" },
	{ 0xa478fa97, "register_ip_vs_app_inc" },
	{ 0x23baf05c, "register_ip_vs_app" },
	{ 0x10d37b36, "unregister_ip_vs_app" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ip_vs,nf_nat";


MODULE_INFO(srcversion, "16FD0D3C94880D7D683F92C");
MODULE_INFO(rhelversion, "8.0");
