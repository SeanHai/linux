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
	{ 0xd02893c3, "nf_ct_remove_expectations" },
	{ 0x1945e618, "nf_ct_unexpect_related" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0x597414ec, "nf_conntrack_helper_register" },
	{ 0x9b391fee, "__nf_ct_refresh_acct" },
	{ 0x50536394, "nf_conntrack_helper_unregister" },
	{ 0xfc33ccad, "dst_release" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0x6dedf842, "nf_ct_expect_init" },
	{ 0xfb166cb4, "param_ops_bool" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc034a8a8, "nf_ip_route" },
	{ 0x77f7424b, "nf_conntrack_helpers_register" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x9c11cbd0, "nf_ct_expect_put" },
	{ 0x146ea688, "nf_ct_expect_alloc" },
	{ 0x53e704ac, "nf_ct_expect_related_report" },
	{ 0xe84155f1, "nf_conntrack_helpers_unregister" },
	{ 0x464b359, "__nf_ct_expect_find" },
	{ 0xfdf6be0b, "nf_ipv6_ops" },
	{ 0x9adb7399, "nf_conntrack_expect_lock" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xa202a8e5, "kmalloc_order_trace" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x1836c51b, "nf_ct_helper_log" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x37a0cba, "kfree" },
	{ 0xaac80d5b, "mod_timer_pending" },
	{ 0x8f648a94, "param_ops_uint" },
	{ 0x317cc4af, "skb_copy_bits" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_conntrack";


MODULE_INFO(srcversion, "7B7F487D5DADEA1EBFFACEB");
MODULE_INFO(rhelversion, "8.0");
