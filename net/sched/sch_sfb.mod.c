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
	{ 0xdd926335, "unregister_qdisc" },
	{ 0x69f77094, "register_qdisc" },
	{ 0xdf4ea6d5, "tcf_block_get" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x34e5017e, "qdisc_hash_add" },
	{ 0xa8b126c8, "fifo_create_dflt" },
	{ 0x64d55887, "pfifo_qdisc_ops" },
	{ 0x43dae11a, "nla_parse" },
	{ 0xad27f361, "__warn_printk" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xff68a52f, "qdisc_tree_reduce_backlog" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xa44ddd13, "noop_qdisc" },
	{ 0xd4b235bf, "skb_get_hash_perturb" },
	{ 0x25c872ee, "__qdisc_calculate_pkt_len" },
	{ 0xc5c92ee, "kfree_skb" },
	{ 0x9aecbb9f, "tcf_classify" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x5259ede5, "qdisc_reset" },
	{ 0xb14f033c, "qdisc_put" },
	{ 0x903c34cc, "tcf_block_put" },
	{ 0x5b5a9263, "skb_trim" },
	{ 0xfdc1bd61, "nla_put" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x9aff43a2, "gnet_stats_copy_app" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "19056648496B8FDD7F98247");
MODULE_INFO(rhelversion, "8.0");
