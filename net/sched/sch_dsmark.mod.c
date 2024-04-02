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
	{ 0x58f85378, "__pskb_pull_tail" },
	{ 0xd3ad0c22, "pskb_expand_head" },
	{ 0x9aecbb9f, "tcf_classify" },
	{ 0x25c872ee, "__qdisc_calculate_pkt_len" },
	{ 0xad27f361, "__warn_printk" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xff68a52f, "qdisc_tree_reduce_backlog" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xa44ddd13, "noop_qdisc" },
	{ 0x34e5017e, "qdisc_hash_add" },
	{ 0x66cc6745, "qdisc_create_dflt" },
	{ 0x64d55887, "pfifo_qdisc_ops" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xdf4ea6d5, "tcf_block_get" },
	{ 0x5b5a9263, "skb_trim" },
	{ 0xfdc1bd61, "nla_put" },
	{ 0x27e1a049, "printk" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x43dae11a, "nla_parse" },
	{ 0x5259ede5, "qdisc_reset" },
	{ 0x37a0cba, "kfree" },
	{ 0xb14f033c, "qdisc_put" },
	{ 0x903c34cc, "tcf_block_put" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "2DE4474000022ED9658AB13");
MODULE_INFO(rhelversion, "8.0");
