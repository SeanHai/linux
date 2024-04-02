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
	{ 0x2d3385d3, "system_wq" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0x754d539c, "strlen" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0xd118b2d1, "snd_info_create_card_entry" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xc1c794e, "delayed_work_timer_fn" },
	{ 0xc41033c1, "seq_printf" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xfb166cb4, "param_ops_bool" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0x68f927fb, "cancel_delayed_work_sync" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x9e913c1, "snd_pcm_alt_chmaps" },
	{ 0x91715312, "sprintf" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x9cb46dce, "_snd_ctl_add_slave" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x110918bb, "snd_device_new" },
	{ 0xb5a8d234, "cancel_delayed_work" },
	{ 0xd257960c, "device_register" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x2dcb3abd, "ac97_bus_type" },
	{ 0xf33f3525, "pci_read_config_word" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xd3038457, "snd_ctl_boolean_mono_info" },
	{ 0x81b69e41, "snd_ctl_enum_info" },
	{ 0x97ab9ad3, "pv_irq_ops" },
	{ 0x1ef49199, "snd_pcm_hw_rule_add" },
	{ 0x80f21e2b, "snd_ctl_make_virtual_master" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xcc7c9e41, "snd_component_add" },
	{ 0x4e1b99f, "snd_pcm_std_chmaps" },
	{ 0x7e75accd, "snd_ctl_remove_id" },
	{ 0xd1e4ec46, "queue_delayed_work_on" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x2edbb2fe, "snd_ctl_new1" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xd03402f9, "snd_ctl_find_id" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x4cda566, "snd_interval_refine" },
	{ 0x37a0cba, "kfree" },
	{ 0xba705780, "snd_info_free_entry" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x6ecae48b, "device_unregister" },
	{ 0xae307d4b, "snd_ctl_add" },
	{ 0x76ca9e4e, "dev_set_name" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xdb02a8a3, "snd_info_register" },
	{ 0xe914e41e, "strcpy" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd,snd-pcm,ac97_bus";


MODULE_INFO(srcversion, "CBF501AE8F90D9D93962D98");
MODULE_INFO(rhelversion, "8.0");
