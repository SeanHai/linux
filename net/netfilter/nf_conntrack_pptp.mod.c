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
	{ 0x1945e618, "nf_ct_unexpect_related" },
	{ 0x597414ec, "nf_conntrack_helper_register" },
	{ 0x33003ad6, "nf_ct_gre_keymap_add" },
	{ 0x50536394, "nf_conntrack_helper_unregister" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0x6dedf842, "nf_ct_expect_init" },
	{ 0xea6823f, "nf_ct_delete" },
	{ 0x69fce43d, "nf_ct_expect_find_get" },
	{ 0x9c11cbd0, "nf_ct_expect_put" },
	{ 0x146ea688, "nf_ct_expect_alloc" },
	{ 0x53e704ac, "nf_ct_expect_related_report" },
	{ 0x1884e0b8, "nf_ct_gre_keymap_destroy" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x2a18c74, "nf_conntrack_destroy" },
	{ 0x317cc4af, "skb_copy_bits" },
	{ 0x5d71f8dd, "nf_conntrack_find_get" },
	{ 0xae12eeca, "nf_ct_invert_tuplepr" },
	{ 0x81963de2, "nf_ct_ext_add" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_conntrack,nf_conntrack_proto_gre";


MODULE_INFO(srcversion, "055E1CD6FCA4F13849F1ED7");
MODULE_INFO(rhelversion, "8.0");
