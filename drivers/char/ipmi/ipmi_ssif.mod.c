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
	{ 0xec89da9c, "param_ops_ushort" },
	{ 0x103b0514, "param_ops_charp" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0x6dc87645, "param_array_ops" },
	{ 0xfb166cb4, "param_ops_bool" },
	{ 0x1895b770, "platform_driver_unregister" },
	{ 0xa46c2bd8, "i2c_del_driver" },
	{ 0x37bf01f3, "i2c_register_driver" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xf65b883b, "__platform_driver_register" },
	{ 0x28985b9f, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x230094ac, "ipmi_smi_watchdog_pretimeout" },
	{ 0xea4eda37, "ipmi_alloc_smi_msg" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x24a92cf6, "device_property_read_u8_array" },
	{ 0x509ebd5e, "device_property_read_u16_array" },
	{ 0xc74fbfc2, "i2c_for_each_dev" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xc499ae1e, "kstrdup" },
	{ 0x11b99291, "ipmi_register_smi" },
	{ 0x6badec18, "device_add_groups" },
	{ 0xa975ccbd, "wake_up_process" },
	{ 0x2ae2fdba, "dev_notice" },
	{ 0xeb81585a, "kthread_create_on_node" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0x67369b42, "ipmi_addr_src_to_str" },
	{ 0x7ab96ce6, "ipmi_dmi_get_slave_addr" },
	{ 0x78843f2d, "is_acpi_device_node" },
	{ 0x5792f848, "strlcpy" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x62a67793, "i2c_new_device" },
	{ 0x8ea83eb4, "i2c_adapter_type" },
	{ 0xc2e1f262, "kthread_stop" },
	{ 0xec02a35f, "del_timer_sync" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x3fa81040, "device_remove_groups" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x27e1a049, "printk" },
	{ 0xa19985b7, "ipmi_smi_msg_received" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0xdfba10cd, "i2c_smbus_write_block_data" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x262e823a, "wait_for_completion_interruptible" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x85ffabba, "get_device" },
	{ 0x28318305, "snprintf" },
	{ 0xe4330a39, "ipmi_unregister_smi" },
	{ 0x29361773, "complete" },
	{ 0xfa5223cc, "del_timer" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x6d7aac23, "i2c_smbus_read_block_data" },
	{ 0xf9a482f9, "msleep" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x37a0cba, "kfree" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x2b26f667, "i2c_unregister_device" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x11089ac7, "_ctype" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ipmi_msghandler";

MODULE_ALIAS("i2c:ipmi_ssif");
MODULE_ALIAS("acpi*:IPI0001:*");

MODULE_INFO(srcversion, "385D7A7F4B018C225357BD8");
MODULE_INFO(rhelversion, "8.0");
