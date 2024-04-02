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
	{ 0x3d28fe6d, "nf_nat_pptp_hook_expectfn" },
	{ 0xbc5c27f0, "nf_nat_pptp_hook_exp_gre" },
	{ 0xeaee881d, "nf_nat_pptp_hook_inbound" },
	{ 0x372ebdb7, "nf_nat_pptp_hook_outbound" },
	{ 0x636b12c8, "nf_nat_need_gre" },
	{ 0x827cc6a1, "pptp_msg_name" },
	{ 0x5e8c1fe2, "__nf_nat_mangle_tcp_packet" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0xaacfe72f, "nf_nat_setup_info" },
	{ 0x9c11cbd0, "nf_ct_expect_put" },
	{ 0x1945e618, "nf_ct_unexpect_related" },
	{ 0x69fce43d, "nf_ct_expect_find_get" },
	{ 0x2d0cbbcf, "nf_ct_nat_ext_add" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_conntrack_pptp,nf_nat_proto_gre,nf_nat,nf_conntrack";


MODULE_INFO(srcversion, "B028A7F19D962D57538A49F");
MODULE_INFO(rhelversion, "8.0");
