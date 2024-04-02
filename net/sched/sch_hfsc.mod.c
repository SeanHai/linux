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
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xbac58131, "gen_new_estimator" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x37a1909f, "gen_replace_estimator" },
	{ 0x43dae11a, "nla_parse" },
	{ 0x25c872ee, "__qdisc_calculate_pkt_len" },
	{ 0x9aecbb9f, "tcf_classify" },
	{ 0x91a7b1da, "qdisc_class_hash_remove" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xad27f361, "__warn_printk" },
	{ 0x9aff43a2, "gnet_stats_copy_app" },
	{ 0xfc3fcb39, "gnet_stats_copy_queue" },
	{ 0x5ed838cf, "gnet_stats_copy_rate_est" },
	{ 0x7e395b69, "gnet_stats_copy_basic" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xdf2c2742, "rb_last" },
	{ 0xe4839ea, "qdisc_watchdog_schedule_ns" },
	{ 0xca9360b5, "rb_next" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xece784c2, "rb_first" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xff68a52f, "qdisc_tree_reduce_backlog" },
	{ 0xf53d4c26, "qdisc_class_hash_destroy" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x44cef214, "qdisc_warn_nonwc" },
	{ 0xa44ddd13, "noop_qdisc" },
	{ 0xf63683d2, "qdisc_class_hash_grow" },
	{ 0xc4212ab9, "qdisc_class_hash_insert" },
	{ 0x34e5017e, "qdisc_hash_add" },
	{ 0x66cc6745, "qdisc_create_dflt" },
	{ 0x64d55887, "pfifo_qdisc_ops" },
	{ 0xdf4ea6d5, "tcf_block_get" },
	{ 0x117093be, "qdisc_class_hash_init" },
	{ 0x382a043, "qdisc_watchdog_init" },
	{ 0x9e00448b, "qdisc_watchdog_cancel" },
	{ 0x5259ede5, "qdisc_reset" },
	{ 0x37a0cba, "kfree" },
	{ 0xded39a6b, "gen_kill_estimator" },
	{ 0xb14f033c, "qdisc_put" },
	{ 0x903c34cc, "tcf_block_put" },
	{ 0x5b5a9263, "skb_trim" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xfdc1bd61, "nla_put" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "22131261825AAA497E573FE");
MODULE_INFO(rhelversion, "8.0");
