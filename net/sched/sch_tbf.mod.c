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
	{ 0x382a043, "qdisc_watchdog_init" },
	{ 0x27e1a049, "printk" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x34e5017e, "qdisc_hash_add" },
	{ 0xa8b126c8, "fifo_create_dflt" },
	{ 0x552437a, "bfifo_qdisc_ops" },
	{ 0xa61ced89, "qdisc_put_rtab" },
	{ 0xd042475c, "qdisc_get_rtab" },
	{ 0xd3b4ead9, "fifo_set_limit" },
	{ 0xb2cb334, "psched_ratecfg_precompute" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x43dae11a, "nla_parse" },
	{ 0xad27f361, "__warn_printk" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xa44ddd13, "noop_qdisc" },
	{ 0xff68a52f, "qdisc_tree_reduce_backlog" },
	{ 0x509f625d, "consume_skb" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x25c872ee, "__qdisc_calculate_pkt_len" },
	{ 0x77e23d0, "__skb_gso_segment" },
	{ 0xa02e3695, "netif_skb_features" },
	{ 0xfee98533, "skb_gso_validate_mac_len" },
	{ 0xe4839ea, "qdisc_watchdog_schedule_ns" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x5259ede5, "qdisc_reset" },
	{ 0xb14f033c, "qdisc_put" },
	{ 0x9e00448b, "qdisc_watchdog_cancel" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x5b5a9263, "skb_trim" },
	{ 0xdf40da5f, "nla_put_64bit" },
	{ 0xfdc1bd61, "nla_put" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "6513347D32A34A41893C269");
MODULE_INFO(rhelversion, "8.0");
