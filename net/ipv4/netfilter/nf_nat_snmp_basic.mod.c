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
	{ 0x13ce87e8, "asn1_ber_decoder" },
	{ 0x597414ec, "nf_conntrack_helper_register" },
	{ 0x50536394, "nf_conntrack_helper_unregister" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0x2b228406, "nf_nat_snmp_hook" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1836c51b, "nf_ct_helper_log" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf2a7675d, "skb_make_writable" },
	{ 0xe113bbbc, "csum_partial" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_conntrack,nf_conntrack_snmp";


MODULE_INFO(srcversion, "4679E1589A8E97285DDDB97");
MODULE_INFO(rhelversion, "8.0");
