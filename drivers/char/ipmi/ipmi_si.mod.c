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
	{ 0x5eba9410, "__request_region" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x11b99291, "ipmi_register_smi" },
	{ 0x349cba85, "strchr" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0xfa5223cc, "del_timer" },
	{ 0x8e82828e, "iomem_resource" },
	{ 0x754d539c, "strlen" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0x6badec18, "device_add_groups" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0xa19985b7, "ipmi_smi_msg_received" },
	{ 0x8d710940, "pci_match_id" },
	{ 0xdfb2ae49, "pci_disable_device" },
	{ 0x230094ac, "ipmi_smi_watchdog_pretimeout" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x9d099a39, "acpi_remove_gpe_handler" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xfb166cb4, "param_ops_bool" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0xea4eda37, "ipmi_alloc_smi_msg" },
	{ 0x67369b42, "ipmi_addr_src_to_str" },
	{ 0xc499ae1e, "kstrdup" },
	{ 0xeb81585a, "kthread_create_on_node" },
	{ 0xf65b883b, "__platform_driver_register" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x44b5ee9a, "kasprintf" },
	{ 0xe9b41467, "param_ops_string" },
	{ 0xd3752c27, "atomic_notifier_call_chain" },
	{ 0xec02a35f, "del_timer_sync" },
	{ 0xe4330a39, "ipmi_unregister_smi" },
	{ 0xca27d0c4, "ioport_resource" },
	{ 0x11089ac7, "_ctype" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xf7d6636f, "current_task" },
	{ 0x27e1a049, "printk" },
	{ 0xc2e1f262, "kthread_stop" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0xedafd5ca, "platform_device_alloc" },
	{ 0xe0c31db6, "platform_device_add" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x996c611b, "platform_get_resource" },
	{ 0x28985b9f, "mod_timer" },
	{ 0x3cf48db4, "platform_device_unregister" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x24a92cf6, "device_property_read_u8_array" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x2ae2fdba, "dev_notice" },
	{ 0x7ab96ce6, "ipmi_dmi_get_slave_addr" },
	{ 0xe6478472, "_dev_info" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x2b9997fb, "atomic_notifier_chain_register" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0xa975ccbd, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xe45c1b14, "__release_region" },
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x85ffabba, "get_device" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x3fa81040, "device_remove_groups" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x6dc87645, "param_array_ops" },
	{ 0xedc03953, "iounmap" },
	{ 0xdec4b638, "set_user_nice" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x28318305, "snprintf" },
	{ 0x874ce5f3, "platform_get_irq" },
	{ 0xb97f7045, "acpi_install_gpe_handler" },
	{ 0x1895b770, "platform_driver_unregister" },
	{ 0x1d29dff0, "pci_enable_device" },
	{ 0xc054ebe3, "param_ops_ulong" },
	{ 0x8f648a94, "param_ops_uint" },
	{ 0x78843f2d, "is_acpi_device_node" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x27a0b904, "platform_device_put" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ipmi_msghandler";

MODULE_ALIAS("acpi*:IPI0001:*");
MODULE_ALIAS("pci:v0000103Cd0000121Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v*d*sv*sd*bc0Csc07i00*");
MODULE_ALIAS("pci:v*d*sv*sd*bc0Csc07i01*");
MODULE_ALIAS("pci:v*d*sv*sd*bc0Csc07i02*");

MODULE_INFO(srcversion, "529FA08BC6DE58CFE016B1A");
MODULE_INFO(rhelversion, "8.0");
