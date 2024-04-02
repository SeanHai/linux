#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
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
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xa279ec0, "rt2x00lib_get_bssidx" },
	{ 0xad27f361, "__warn_printk" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xe6672d2b, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x18550680, "rt2x00debug_dump_frame" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0xf9c388e5, "dev_err" },
	{ 0xf86185ee, "rt2x00mac_conf_tx" },
	{ 0x5def83f9, "skb_push" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x955c2e4e, "skb_pull" },
	{ 0x1b176013, "rt2x00lib_txdone" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0x56754ef4, "ieee80211_stop_tx_ba_cb_irqsafe" },
	{ 0xe6478472, "_dev_info" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xe2d4a3fe, "rt2x00lib_txdone_nomatch" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x52ecbc75, "crc_ccitt" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0xd4f38c6e, "rt2x00lib_set_mac_address" },
	{ 0x69e1549c, "ieee80211_start_tx_ba_cb_irqsafe" },
	{ 0xeb9faa8b, "__skb_pad" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rt2x00lib,mac80211";


MODULE_INFO(srcversion, "966CF51FCABF548A597F127");
MODULE_INFO(rhelversion, "8.0");
