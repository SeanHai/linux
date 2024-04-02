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
	{ 0x509f625d, "consume_skb" },
	{ 0xab141891, "skb_realloc_headroom" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0x5def83f9, "skb_push" },
	{ 0x955c2e4e, "skb_pull" },
	{ 0x69acdf38, "memcpy" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xde320733, "sockfd_lookup" },
	{ 0x43dae11a, "nla_parse" },
	{ 0x5b5a9263, "skb_trim" },
	{ 0xfdc1bd61, "nla_put" },
	{ 0xad27f361, "__warn_printk" },
	{ 0xfc3fcb39, "gnet_stats_copy_queue" },
	{ 0x7e395b69, "gnet_stats_copy_basic" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x25c872ee, "__qdisc_calculate_pkt_len" },
	{ 0x9aecbb9f, "tcf_classify" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xdf4ea6d5, "tcf_block_get" },
	{ 0x66cc6745, "qdisc_create_dflt" },
	{ 0x64d55887, "pfifo_qdisc_ops" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xa44ddd13, "noop_qdisc" },
	{ 0x5259ede5, "qdisc_reset" },
	{ 0x27e1a049, "printk" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x37a0cba, "kfree" },
	{ 0x50d83074, "fput" },
	{ 0x903c34cc, "tcf_block_put" },
	{ 0xb14f033c, "qdisc_put" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "C40524148359287EC40618E");
MODULE_INFO(rhelversion, "8.0");
