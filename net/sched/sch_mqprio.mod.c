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
	{ 0x5b5a9263, "skb_trim" },
	{ 0xfdc1bd61, "nla_put" },
	{ 0xad27f361, "__warn_printk" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xfc3fcb39, "gnet_stats_copy_queue" },
	{ 0x7e395b69, "gnet_stats_copy_basic" },
	{ 0x10c3f57e, "__gnet_stats_copy_queue" },
	{ 0xa7904be1, "__gnet_stats_copy_basic" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xa792fd7f, "cpumask_next" },
	{ 0x2a70864d, "__cpu_possible_mask" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0x1cc30c3e, "netdev_set_tc_queue" },
	{ 0x43dae11a, "nla_parse" },
	{ 0x66cc6745, "qdisc_create_dflt" },
	{ 0x9f8ad000, "default_qdisc_ops" },
	{ 0xacff4216, "pfifo_fast_ops" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xfd901bfd, "dev_activate" },
	{ 0xf884769b, "dev_deactivate" },
	{ 0xad5f8fb1, "netdev_txq_to_tc" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xb2e50c4f, "netdev_set_num_tc" },
	{ 0x37a0cba, "kfree" },
	{ 0x34e5017e, "qdisc_hash_add" },
	{ 0xb14f033c, "qdisc_put" },
	{ 0xea3e0d76, "dev_graft_qdisc" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "BC6D50208082BFC5320C591");
MODULE_INFO(rhelversion, "8.0");
